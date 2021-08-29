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
    meta(content='Scripting.x3d',name='title'),
    meta(content='X3D encodings example: this Script node decides whether or not to open a bank vault given openVault and combinationEntered messages. To do this, it remembers whether or not the correct combination has been entered. The Script node combined with a Sphere, a TouchSensor and a Sound node to show how is works. When the pointing device is over the sphere, the combinationEntered eventIn of the Script is sent. Then, when the Sphere is touched (typically when the mouse button is pressed) the Script is sent the openVault eventIn. This generates the vaultUnlocked eventOut which starts a click sound.',name='description'),
    meta(content='Don Brutzman and Joe Williams',name='creator'),
    meta(content='1 June 2002',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, Annex C.5 Scripting example',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/examples.html#ScriptingExample',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/Scripting.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Scripting.x3d'),
    Script(DEF='OpenVault',
      field=[
      field(accessType='inputOnly',name='openVault',type='SFTime'),
      field(accessType='inputOnly',name='combinationEntered',type='SFBool'),
      field(accessType='outputOnly',name='vaultUnlocked',type='SFTime'),
      field(accessType='initializeOnly',name='unlocked',type='SFBool',value=False)]),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(1,0,0))),
      geometry=Sphere(),),
    Sound(maxBack=1000,maxFront=1000,minBack=1000,minFront=1000,
      source=AudioClip(DEF='Click',description='clicking sound',stopTime=1,url=["click.wav","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/click.wav"])),
    TouchSensor(DEF='TS',description='touch to click'),
    ROUTE(fromField='isOver',fromNode='TS',toField='combinationEntered',toNode='OpenVault'),
    ROUTE(fromField='touchTime',fromNode='TS',toField='openVault',toNode='OpenVault'),
    ROUTE(fromField='vaultUnlocked',fromNode='OpenVault',toField='startTime',toNode='Click')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Scripting.py")
