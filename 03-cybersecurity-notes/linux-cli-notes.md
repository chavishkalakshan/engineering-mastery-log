# Linux CLI & File Navigation Notes (OverTheWire Bandit 0–5)

## Core Commands & Techniques Learned
- `ssh user@host -p 2220`: Connect securely to a remote server over SSH on a non-standard port.
- `ls -la`: List all directory contents, including hidden files (files starting with a dot `.`).
- `cat filename`: Print the text contents of a file to the terminal.
- `cat ./-`: Read a file whose name is literally `-` by prefixing `./` so the shell doesn't confuse it with a command flag.
- `cat "file name with spaces"`: Use double quotes around filenames containing spaces so the shell reads them as a single argument.
- `file filename`: Determine the exact MIME type or data format of a file (e.g., distinguishing ASCII text from binary data).