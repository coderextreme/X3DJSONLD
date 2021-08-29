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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ScriptNodeFieldControlEcmaScript.x3d',name='title'),
    meta(content='Script node interface between X3D and EcmaScript: this conformance example tests field-based X3D-EcmaScript functionality.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='30 November 1997',name='created'),
    meta(content='13 May 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/ScriptConformance/ScriptNodeFieldControlEcmaScript.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/ScriptNodeFieldControlEcmaScript.x3d',name='identifier'),
    meta(content='VRML 97 Specification, Annex C, ECMAScript scripting reference',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/javascript.html',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/javascript.html#AccessingFields',name='reference'),
    meta(content='Makefile',name='reference'),
    meta(content='Makefile.out',name='reference'),
    meta(content='ScriptNodeFieldControlEcmaScript-VrmlConsoleOutput.txt',name='reference'),
    meta(content='ScriptNodeFieldControlEcmaScriptSnapshots.html',name='reference'),
    meta(content='ScriptNodeFieldControl-Java.x3d',name='reference'),
    meta(content='VRML X3D EcmaScript Script conformance',name='subject'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ScriptNodeFieldControlEcmaScript.x3d'),
    Viewpoint(description='View test',position=(0,0,12)),
    Group(
      children=[
      TouchSensor(DEF='ClickTextToTest',description='Click text to test'),
      Transform(DEF='TextPosition',
        #  TextPosition translation is modified by InterfaceScriptNode. 
        children=[
        Shape(
          geometry=Text(DEF='MessageToUser',string=["Default text in X3D scene will be replaced by","Java initialize() in Script using EventOut control.","This text appears first, if Java initialization fails.",""],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)),
          appearance=Appearance(
            material=Material(DEF='TextMaterial',diffuseColor=(0.8,0.2,0.2),shininess=0.9)))]),
      Script(DEF='InterfaceScriptNode',directOutput=True,
        #  No default values are allowed for eventIn or eventOut. 
        field=[
        field(accessType='inputOnly',name='startTime',type='SFTime'),
        field(accessType='initializeOnly',name='sceneText',type='SFNode',
          children=[
          Text(USE='MessageToUser')]),
        field(accessType='initializeOnly',name='sceneTransform',type='SFNode',
          children=[
          Transform(USE='TextPosition')]),
        field(accessType='initializeOnly',name='sceneMaterial',type='SFNode',
          children=[
          Material(USE='TextMaterial')])])]),
    ROUTE(fromField='touchTime',fromNode='ClickTextToTest',toField='startTime',toNode='InterfaceScriptNode')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ScriptNodeFieldControlEcmaScript.py")
