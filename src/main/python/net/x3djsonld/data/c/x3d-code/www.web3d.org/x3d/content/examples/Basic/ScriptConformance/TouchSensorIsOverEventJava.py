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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    meta(content='TouchSensorIsOverEventJava.x3d',name='title'),
    meta(content='This example demonstrates a scripted response to a TouchSensor isOver event by changing the color of a Box from blue to red',name='description'),
    meta(content='X3D Specification',name='creator'),
    meta(content='23 February 2005',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X3D Java Script Authoring Interface (SAI)',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/ScriptConformance/TouchSensorIsOverEventJava.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19777-2-X3DLanguageBindings-Java/Part2/examples.html#TouchSensorIsOverEvent',name='reference'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TouchSensorIsOverEventJava.x3d'),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='MAT',diffuseColor=(0,0,1))),
        geometry=Box(),),
      TouchSensor(DEF='TS')]),
    Script(DEF='SC',url=["SAIExample1.class","https://www.web3d.org/x3d/content/examples/Basic/ScriptConformance/SAIExample1.class"],
      field=[
      field(accessType='inputOnly',name='isOver',type='SFBool'),
      field(accessType='outputOnly',name='diffuseColor_changed',type='SFColor')]),
    ROUTE(fromField='isOver',fromNode='TS',toField='isOver',toNode='SC'),
    ROUTE(fromField='diffuseColor_changed',fromNode='SC',toField='set_diffuseColor',toNode='MAT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TouchSensorIsOverEventJava.py")
