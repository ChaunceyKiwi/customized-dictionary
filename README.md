# CustomDictionary
Custom dictionary embedded in OSX dictionary.app

# Usage
1. Move the directory 'DictionaryDevelopmentKit' to '/Applications/Utilities'.
2. Run Make to build .dictionary file.
3. Move 'objects/dictName.dictionary' to 'Library/Dictionaries'. 
4. Reopen dictionary.app and add newly built dictionary in Preference.

# About XML file
The words of dictionary is stored in the MyDictionary.xml. To add new words to dictionary you need to modify it. To make it easier to create such a file, you can use the program in the directory ./txt2xmlScript to transform a .txt file to xml file. The format should be the same as the sample file I give. Replace MyDictionary.xml after you have created new .xml file.

# Other
To edit the content of dictionary, you can edit css and content of dictionary inMyDictionary.css and MyDictionary.xml.

# Demo
![demo](https://raw.githubusercontent.com/ChaunceyKiwi/CustomDictionary/master/demo.png)
 
