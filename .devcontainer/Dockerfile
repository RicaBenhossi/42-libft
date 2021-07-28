# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.184.0/containers/cpp/.devcontainer/base.Dockerfile

# [Choice] Debian / Ubuntu version: debian-10, debian-9, ubuntu-20.04, ubuntu-18.04
ARG VARIANT="buster"
FROM mcr.microsoft.com/vscode/devcontainers/cpp:0-${VARIANT}

# [Optional] Uncomment this section to install additional packages.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends python3-pip

RUN pip3 install norminette

RUN echo "\n# My Aliases" >> /home/vscode/.zshrc
RUN echo "alias gcc='clang-9"
RUN echo "alias clang='clang-9"
RUN echo "alias normgccrun='norminette -R CheckForbiddenSourceHeader && gcc -Wall -Wextra -Werror *.c && ./a.out'" >> /home/vscode/.zshrc
RUN echo "alias norm='norminette -R CheckForbiddenSourceHeader'" >> /home/vscode/.zshrc
RUN echo "alias norm-ft='norm $(find . -type f -name "ft_*.c")'" >> /home/vscode/.zshrc
RUN echo "alias gccpall='gcc -Wall -Wextra -Werror *.c'" >> /home/vscode/.zshrc
RUN echo "alias gccp='gcc -Wall -Wextra -Werror'" >> /home/vscode/.zshrc
RUN echo "alias a='./a.out'" >> /home/vscode/.zshrc
RUN echo "alias ls-ft='find  -type f -name \"ft_*.c\" -print'" >> /home/vscode/.zshrc
RUN echo "alias gcctest='gccp \"$1\"/ft_*.c \"$1\"/\"$1\".c'" >> /home/vscode/.zshrc
RUN echo "export ctest='/workspaces/42/42tests'" >> /home/vscode/.profile