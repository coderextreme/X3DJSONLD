####################################################################################################
#
# Now available: developmental python x3d.py package on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.3',
  #  All head/meta tags are optional, WorldInfo is also optional 
  #  Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1 
  head=head(
    children=[
    meta(content='HelloWorldMinimal.x3d',name='title'),
    meta(content='Hello World minimal example scene.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='19 January 2020',name='created'),
    meta(content='24 January 2020',name='modified'),
    meta(content='https://helloworldcollection.de',name='reference'),
    meta(content='https://en.wiktionary.org/wiki/Hello_World',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program',name='reference'),
    meta(content='https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world',name='reference'),
    meta(content='https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HelloWorldMinimal.x3d'),
    Shape(
      geometry=Text(string=["hello, world"]))])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HelloWorldMinimal.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python HelloWorldMinimal.py load and self-test diagnostics complete.")
