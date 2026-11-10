# Linux & Cybersecurity Notes

Practical command-line references and general security concepts from authorized learning environments.

## Available notes

**[Linux CLI & File Navigation](linux-cli-notes.md)**

The existing reference covers:

- SSH connections to lab hosts
- Listing files, including hidden entries
- Reading text-file contents
- Handling file names containing spaces or leading hyphens
- Identifying file formats with `file`

## Quick command reference

| Command | Purpose |
| --- | --- |
| `pwd` | Show the working directory |
| `ls -la` | List files, including hidden files |
| `cat -- filename` | Read a text file |
| `file filename` | Identify file content type |
| `grep "term" filename` | Find matching lines |
| `head -n 5 filename` | Display the first five lines |
| `wc -l filename` | Count input lines |
| `chmod 644 filename` | Set owner read/write and group/other read permission on a file |

A useful pipeline for practice logs:

```bash
grep "ERROR" sample.log | wc -l
```

This counts lines containing the literal text `ERROR` in `sample.log`. Use `grep -F` if you want to treat a complex pattern as plain text.

> **Responsible practice:** Only inspect or test systems you own or have explicit permission to use. Avoid publishing flags, credentials, or private challenge material.

[← Back to repository overview](../README.md)
