####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
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
  head=head(
    children=[
    meta(content='StringArrayEncodingExamples.x3d',name='title'),
    meta(content='Demonstrate simple X3D MFString (string array) encoding.',name='description'),
    meta(content='27 May 2017',name='created'),
    meta(content='27 May 2017',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='X3dHeaderPrototypeSyntaxExamples.x3d',name='reference'),
    meta(content='X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString',name='specificationUrl'),
    meta(content='X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString',name='specificationUrl'),
    meta(content='X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(DEF='EntryView',description='Hello MFString syntax'),
    Background(skyColor=[(0.6,1,0.8)]),
    Shape(
      geometry=Text(string=["One, Two, Three","","He said, \"Immel did it!\""],
        #  alternative XML encoding: Text string='"One, Two, Three" "" "He said, \&quot;Immel did it!\&quot;"' 
        #  alternative Java source: .setString(new String [] {"One, Two, Three", "", "He said, \"Immel did it!\""}) 
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLD')),
      appearance=Appearance(
        material=Material(diffuseColor=(0.6,0.4,0.2))))])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for StringArrayEncodingExamples.py:')
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

print("python StringArrayEncodingExamples.py load and self-test diagnostics complete.")
