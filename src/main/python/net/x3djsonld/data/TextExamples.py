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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='TextExamples.x3d',name='title'),
    meta(content='Show different escape-character text examples for embedded quotation marks.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='7 April 2001',name='created'),
    meta(content='26 April 2016',name='modified'),
    meta(content='Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.',name='warning'),
    meta(content='Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(translation=(0,2,0),
      children=[
      Shape(
        geometry=Text(string=["Compare special character escaping"],
          fontStyle=FontStyle(DEF='testFontStyle',justify=["MIDDLE","MIDDLE"],size=0.8)),
        appearance=Appearance(DEF='LightBlueAppearance',
          material=Material(diffuseColor=(0.1,0.7,0.7))))]),
    Transform(translation=(-3,0,0),
      children=[
      Shape(
        geometry=Text(string=["I don\'t think so","","he said \"Hi\""],
          fontStyle=FontStyle(USE='testFontStyle')),
        appearance=Appearance(USE='LightBlueAppearance'))]),
    Transform(translation=(3,0,0),
      children=[
      Shape(
        geometry=Text(string=["I don\'t think so","","he said \"Hi\""],
          fontStyle=FontStyle(USE='testFontStyle')),
        appearance=Appearance(USE='LightBlueAppearance'))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for TextExamples.py:')
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

print("python TextExamples.py load and self-test diagnostics complete.")
