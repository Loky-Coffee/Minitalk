# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalatzas <aalatzas@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 01:26:54 by aalatzas          #+#    #+#              #
#    Updated: 2024/01/29 10:02:11 by aalatzas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -g

################################################################################
####		 	 		MANDATORY_MINITALK_RULES						   #####
################################################################################

CLIENT = client
SERVER = server
OBJ_DIR = obj/

SRC_CLIENT = $(CLIENT).c
SRC_SERVER = $(SERVER).c

OBJ_CLIENT = $(addprefix $(OBJ_DIR), $(notdir $(SRC_CLIENT:.c=.o)))
OBJ_SERVER = $(addprefix $(OBJ_DIR), $(notdir $(SRC_SERVER:.c=.o)))

greate_client: $(CLIENT)
$(CLIENT): libft $(OBJ_CLIENT)
	@$(CC) $(CFLAGS) -o $(CLIENT) $(OBJ_CLIENT) $(LIBFT1)

greate_server: $(SERVER)
$(SERVER): libft $(OBJ_SERVER)
	@$(CC) $(CFLAGS) -o $(SERVER) $(OBJ_SERVER) $(LIBFT1)

all: greate_client greate_server

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

s:
	./server
clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(CLIENT)
	@rm -f $(SERVER)

re: fclean all
################################################################################
####           			 MANDATORY_SERVER PID HANDLING                      ####
################################################################################

PID_FILE = .server_pid
ask-pid:
	@SERVER_PID=$$(osascript -e 'Tell application "System Events" to display dialog \
	"Please enter the PID of the server:" default answer ""' -e 'text returned of result'); \
	echo $$SERVER_PID > $(PID_FILE)


PID_FILE2 = .server_pid
STRING_FILE2 = .input_string
ask-input:
	@SERVER_PID2=$$(osascript -e 'Tell application "System Events"\
	 to display dialog "Please enter the PID of the server:" default answer ""' -e 'text returned of result'); \
	echo $$SERVER_PID2 > $(PID_FILE2); \
	INPUT_STRING=$$(osascript -e 'Tell application "System Events"\
	 to display dialog "Please enter the string to be transferred to the server:" default answer ""' -e 'text returned of result'); \
	echo $$INPUT_STRING > $(STRING_FILE2)

################################################################################
#### 		               MANDATORY_AUTO_TEST_RULES                        ####
################################################################################

test: ask-input
	@SERVER_PID=$$(cat $(PID_FILE2)); \
	INPUT_STRING=$$(cat $(STRING_FILE2)); \
	echo "\033[93mDie eingegebene PID ist \033[92m$$SERVER_PID\033[0m"; \
	echo "\033[93mDer eingegebene String ist \033[92m$$INPUT_STRING\033[0m"; \
	./client $$SERVER_PID "$$INPUT_STRING"
################################################################################
#### 		              MANDATORY_MANUAL_TEST_RULES                       ####
################################################################################

t: ask-pid
	@SERVER_PID=$$(cat $(PID_FILE)); \
	echo "\033[93mDie eingegebene PID ist \033[92m$$SERVER_PID\033[0m"; \
	./client $$SERVER_PID "\
	1-Byte Zeichen (ASCII): A, B, C, D, E, F, G, H, I, J, K, L, M, N, O\n\
	2-Byte Zeichen (Griechische Buchstaben): Α (Alpha), Β (Beta), Γ (Gamma),\
		 Δ (Delta), Ε (Epsilon), Ζ (Zeta), Η (Eta), Θ (Theta), Ι (Iota), Κ (Kappa),\
		  Λ (Lambda), Μ (Mu), Ν (Nu), Ξ (Xi), Ο (Omicron)\n\
	3-Byte Zeichen: Verschiedene Symbole und Piktogramme: ☺, ☻, ☹, ☼, ☽, ☾, ♠, ♣, ♥, ♦, ♪, ♫, ♬, ♭, ♮\n\
	4-Byte Zeichen (Emojis): Gesichter: 😀, 😁, 😂, 😃, 😄, 😅, 😆, 😇, 😈, 😉, 😊, 😋, 😌, 😍, 😎\n\
	Zeichen aus verschiedenen Sprachen:\
		 Arabisch: ا, ب, ت, ث, ج, ح, خ, د, ذ, \
ر, ز, س, ش, ص, ض, ط, ظ, ع, غ, ف, ق, ك, ل, م, ن, ه, و, \
	Chinesisch: 中, 国, 我, 你, 他, 的, 是, 了, 不, 在, 有, 这, 个, 上, 们 \
	Japanisch (Hiragana): あ, い, う, え, お, か, き, く, け, こ, さ, し, す, せ, そ"

# ################################################################################
# ####						 MINITALK_BONUS_PART_RULES 					     #####
# ################################################################################
CLIENT_BONUS = client_bonus
SERVER_BONUS = server_bonus
OBJ_DIR = obj/

SRC_CLIENT_BONUS = $(CLIENT_BONUS).c
SRC_SERVER_BONUS = $(SERVER_BONUS).c

OBJ_CLIENT_BONUS = $(addprefix $(OBJ_DIR), $(notdir $(SRC_CLIENT_BONUS:.c=.o)))
OBJ_SERVER_BONUS = $(addprefix $(OBJ_DIR), $(notdir $(SRC_SERVER_BONUS:.c=.o)))

greate_client_bonus: $(CLIENT_BONUS)
$(CLIENT_BONUS): libft $(OBJ_CLIENT_BONUS)
	@$(CC) $(CFLAGS) -o $(CLIENT_BONUS) $(OBJ_CLIENT_BONUS) $(LIBFT1)

greate_server_bonus: $(SERVER_BONUS)
$(SERVER_BONUS): libft $(OBJ_SERVER_BONUS)
	@$(CC) $(CFLAGS) -o $(SERVER_BONUS) $(OBJ_SERVER_BONUS) $(LIBFT1)

bonus: greate_client_bonus greate_server_bonus

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
sb:
	./server_bonus
clean_bonus:
	@rm -rf $(OBJ_DIR)

fclean_bonus: clean_bonus
	@rm -f $(CLIENT_BONUS)
	@rm -f $(SERVER_BONUS)

re_bonus: fclean_bonus bonus
################################################################################
#### 		               BONUS_AUTO_TEST_RULES        	                ####
################################################################################

test_bonus: ask-input
	@SERVER_PID=$$(cat $(PID_FILE2)); \
	INPUT_STRING=$$(cat $(STRING_FILE2)); \
	echo "\033[93mDie eingegebene PID ist \033[92m$$SERVER_PID\033[0m"; \
	echo "\033[93mDer eingegebene String ist \033[92m$$INPUT_STRING\033[0m"; \
	./client_bonus $$SERVER_PID "$$INPUT_STRING"


################################################################################
#### 		           	   BONUS_MANUAL_TEST_RULES                          ####
################################################################################

tb: ask-pid
	@SERVER_PID=$$(cat $(PID_FILE)); \
	echo "\033[93mDie eingegebene PID ist \033[92m$$SERVER_PID\033[0m"; \
	./client_bonus $$SERVER_PID "\
	1-Byte Zeichen (ASCII): A, B, C, D, E, F, G, H, I, J, K, L, M, N, O\n\
	2-Byte Zeichen (Griechische Buchstaben): Α (Alpha), Β (Beta), Γ (Gamma),\
		 Δ (Delta), Ε (Epsilon), Ζ (Zeta), Η (Eta), Θ (Theta), Ι (Iota), Κ (Kappa),\
		  Λ (Lambda), Μ (Mu), Ν (Nu), Ξ (Xi), Ο (Omicron)\n\
	3-Byte Zeichen: Verschiedene Symbole und Piktogramme: ☺, ☻, ☹, ☼, ☽, ☾, ♠, ♣, ♥, ♦, ♪, ♫, ♬, ♭, ♮\n\
	4-Byte Zeichen (Emojis): Gesichter: 😀, 😁, 😂, 😃, 😄, 😅, 😆, 😇, 😈, 😉, 😊, 😋, 😌, 😍, 😎\n\
	Zeichen aus verschiedenen Sprachen:\
		 Arabisch: ا, ب, ت, ث, ج, ح, خ, د, ذ, \
ر, ز, س, ش, ص, ض, ط, ظ, ع, غ, ف, ق, ك, ل, م, ن, ه, و, \
	Chinesisch: 中, 国, 我, 你, 他, 的, 是, 了, 不, 在, 有, 这, 个, 上, 们 \
	Japanisch (Hiragana): あ, い, う, え, お, か, き, く, け, こ, さ, し, す, せ, そ"

################################################################################
####							   LIBFT_RULES 							   #####
################################################################################

LIBFT1 = ./libft/libft.a
LIBFT_OBJ_DIR = libft/obj/
LIBFT_SRC_DIR = libft/src/

$(LIBFT_OBJ_DIR)%.o: $(LIBFT_SRC_DIR)%.c
	@mkdir -p $(LIBFT_OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
libft:
	@cd libft && make
re_libft:
	@cd libft && make re
clean_libft:
	@cd libft && make clean
fclean_libft: clean_libft
	@cd libft && make fclean

################################################################################
####							  EXTRA_RULES 							   #####
################################################################################

.PHONY: all clean fclean re start test libft re_libft clean_libft fclean_libft \
		 tb t  r rb bonus re_bonus all_bonus clean_bonus fclean_bonus \
		re_bonus test_bonus greate_server_bonus greate_client_bonus ask-pid ask-input \


fcleanall: fclean fclean_bonus clean_libft  fclean_libft
		rm -f libft.a
		rm -f libft.h
		rm -rf .input_string
		rm -rf .server_pid
