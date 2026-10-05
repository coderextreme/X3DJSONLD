sudo apt update
sudo apt install curl rlwrap
curl -L -O https://github.com/clojure/brew-install/releases/latest/download/linux-install.sh
chmod +x linux-install.sh
sudo ./linux-install.sh

mkdir -p ~/bin
curl -o ~/bin/lein https://raw.githubusercontent.com/technomancy/leiningen/stable/bin/lein
chmod +x ~/bin/lein
export PATH="$HOME/bin:$PATH"   # add to ~/.bashrc or ~/.zshrc
lein version                    # first run downloads the self-install jar
