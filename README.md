# Customized Dictionary
Customized dictionary that can be embedded MacOS App *Dictionary*

# Usage
1. Move the directory 'DictionaryDevelopmentKit' to '/Applications/Utilities'.
2. Run `make` to build '.dictionary' file.
3. Move 'objects/dictName.dictionary' to 'Library/Dictionaries'. 
4. Reopen dictionary.app and add newly built dictionary in Preference.

# About XML file
The vocabulary of dictionary is stored in the 'MyDictionary.xml'. To add new words, you need to modify this xml file. To make it easier to create the file, you can use the program in the directory './txt2xmlScript' to transform a txt file to xml file. The format should be the same as the sample file I give. Replace MyDictionary.xml with the new xml file you have just created.

# Others
To edit css, you can edit 'MyDictionary.css'.
To edit the content of dictionary, you can edit 'MyDictionary.xml'.

# Demo
![demo](https://raw.githubusercontent.com/ChaunceyKiwi/CustomDictionary/master/demo.png)
 
