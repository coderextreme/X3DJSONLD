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
    meta(content='Example19.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='24 May 2000',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D working group',name='creator'),
    meta(content='VRML 97 specification example: Execution model demonstrated. Click ball to see script-generated text appear.',name='description'),
    meta(content='originals/exampleD_19.wrl',name='reference'),
    meta(content='VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.19 Execution model',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.19',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example19.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Example19.x3d'),
    TouchSensor(DEF='TS',description='touch to trigger more events'),
    #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
    Script(DEF='Script1',
      field=[
      field(accessType='inputOnly',name='touchTime',type='SFTime'),
      field(accessType='outputOnly',name='toScript2',type='SFBool'),
      field(accessType='outputOnly',name='toScript3',type='SFBool'),
      field(accessType='outputOnly',name='string',type='SFString')]),
    #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
    Script(DEF='Script2',
      field=[
      field(accessType='inputOnly',name='fromScript1',type='SFBool'),
      field(accessType='outputOnly',name='toScript4',type='SFBool'),
      field(accessType='outputOnly',name='string',type='SFString')]),
    #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
    Script(DEF='Script3',
      field=[
      field(accessType='inputOnly',name='fromScript1',type='SFBool'),
      field(accessType='outputOnly',name='toScript5',type='SFBool'),
      field(accessType='outputOnly',name='toScript6',type='SFBool'),
      field(accessType='outputOnly',name='string',type='SFString')]),
    #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
    Script(DEF='Script4',
      field=[
      field(accessType='inputOnly',name='fromScript2',type='SFBool')]),
    #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
    Script(DEF='Script5',
      field=[
      field(accessType='inputOnly',name='fromScript3',type='SFBool')]),
    #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
    Script(DEF='Script6',
      field=[
      field(accessType='inputOnly',name='fromScript3',type='SFBool'),
      field(accessType='outputOnly',name='toScript7',type='SFBool'),
      field(accessType='outputOnly',name='string',type='SFString')]),
    #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
    Script(DEF='Script7',
      field=[
      field(accessType='inputOnly',name='fromScript6',type='SFBool')]),
    #  Display the results 
    Script(DEF='Collector',
      field=[
      field(accessType='outputOnly',name='string',type='MFString'),
      field(accessType='inputOnly',name='fromString',type='SFString')]),
    Transform(translation=(0,-6,0),
      children=[
      Transform(translation=(-2,2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.6,0))),
          geometry=Sphere(),)]),
      Shape(
        geometry=Text(DEF='Result',
          fontStyle=FontStyle(justify=["BEGIN","END"])),
        appearance=Appearance(DEF='DefaultAppearance',
          material=Material(),))]),
    Viewpoint(description='Touch ball to trigger events',position=(7,-1,18)),
    ROUTE(fromField='touchTime',fromNode='TS',toField='touchTime',toNode='Script1'),
    ROUTE(fromField='toScript2',fromNode='Script1',toField='fromScript1',toNode='Script2'),
    ROUTE(fromField='toScript3',fromNode='Script1',toField='fromScript1',toNode='Script3'),
    ROUTE(fromField='toScript4',fromNode='Script2',toField='fromScript2',toNode='Script4'),
    ROUTE(fromField='toScript5',fromNode='Script3',toField='fromScript3',toNode='Script5'),
    ROUTE(fromField='toScript6',fromNode='Script3',toField='fromScript3',toNode='Script6'),
    ROUTE(fromField='toScript7',fromNode='Script6',toField='fromScript6',toNode='Script7'),
    ROUTE(fromField='string',fromNode='Script1',toField='fromString',toNode='Collector'),
    ROUTE(fromField='string',fromNode='Script2',toField='fromString',toNode='Collector'),
    ROUTE(fromField='string',fromNode='Script3',toField='fromString',toNode='Collector'),
    ROUTE(fromField='string',fromNode='Script6',toField='fromString',toNode='Collector'),
    ROUTE(fromField='string',fromNode='Collector',toField='string',toNode='Result')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Example19.py")
