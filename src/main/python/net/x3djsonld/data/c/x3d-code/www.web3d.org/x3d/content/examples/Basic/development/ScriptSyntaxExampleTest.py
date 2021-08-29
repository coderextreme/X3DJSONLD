###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ScriptSyntaxExampleTest.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='8 January 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Script node syntax example, testing sample values of various types with simple escaping of apostrophe and quotation mark characters, with results shown on Browser console output.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ScriptSyntaxExampleTest.x3d',name='identifier'),
    meta(content='X3D-Edit, https://www.web3d.org/x3d/content/README.X3D-Edit.txt',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ScriptSyntaxExampleTest.x3d'),
    Script(DEF='myScript',url=["NoSuchScript1.js","https://www.web3d.org/x3d/content/examples/Basic/development/NoSuchScript2.class.ignore"],
      field=[
      field(accessType='inputOnly',name='someSFBool',type='SFBool'),
      field(accessType='outputOnly',name='someMFInt32',type='MFInt32'),
      field(accessType='initializeOnly',name='someMFFloats',type='MFFloat',value=[0.0,1.0,2.0]),
      field(accessType='initializeOnly',name='someStringField',type='SFString',value='hello'),
      field(accessType='initializeOnly',name='stringTest1',type='MFString',value=["\'","apostrophe"]),
      field(accessType='initializeOnly',name='stringTest2',type='MFString',value=["Quote &quot; character","More Text"]),
      field(accessType='initializeOnly',name='someInitializedRotation',type='SFRotation',value=(0,1,0,0)),
      field(accessType='initializeOnly',name='someInitializedTime',type='SFTime',value=0)]),
    Anchor(description='Select text to view source documentation',url=["ScriptSyntaxExampleTest.html","https://www.web3d.org/x3d/content/examples/Basic/development/ScriptSyntaxExampleTest.html"],
      children=[
      Shape(
        geometry=Text(string=["Script node syntax example,","select this text to view source"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.4,0.1)))),
      #  selectable Text to show Anchor description 
      Shape(
        geometry=Box(size=(11,2,.001)),
        appearance=Appearance(
          material=Material(transparency=1)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ScriptSyntaxExampleTest.py")
