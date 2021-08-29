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
    meta(content='PushButtonExample.x3d',name='title'),
    meta(content='PushButton widget example use, inner button and outer shape can be round or square',name='description'),
    meta(content='Don Brutzman, Murat Onder and MV4205 class, Spring 2004 Quarter',name='creator'),
    meta(content='12 May 2004',name='created'),
    meta(content='6 March 2010',name='modified'),
    meta(content='PushButtonPrototype.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/PushButtonExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Initial Viewpoint',orientation=(0.123,-0.991,0.05,0.7741),position=(-2,-0.1,2)),
    Background(skyColor=[(0.8,0.6,0.1)]),
    ExternProtoDeclare(appinfo='PushButton widget, inner button and outer shape can be round or square',name='PushButton',url=["PushButtonPrototype.x3d#PushButton","../../Tools/Animation/PushButtonPrototype.x3d#PushButton","https://savage.nps.edu/Savage/Tools/Animation/PushButtonPrototype.x3d#PushButton","../../Tools/Animation/PushButtonPrototype.wrl#PushButton","PushButtonPrototype.wrl#PushButton","https://savage.nps.edu/Savage/Tools/Animation/PushButtonPrototype.wrl#PushButton"],
      field=[
      field(accessType='initializeOnly',appinfo='enables the console print-out in case of assigning wrong values default is true',name='traceEnabled',type='SFBool'),
      field(accessType='initializeOnly',name='outerShapeMaterial',type='SFNode'),
      field(accessType='initializeOnly',appinfo='defaultMaterial for inner pushbutton',name='defaultMaterial',type='SFNode'),
      field(accessType='initializeOnly',appinfo='toggleMaterial for inner pushbutton',name='toggleMaterial',type='SFNode'),
      field(accessType='outputOnly',appinfo='boolean output of button selection',name='value_changed',type='SFBool'),
      field(accessType='initializeOnly',appinfo='allowed values: round or square default is round',name='outerSwitchStyle',type='SFString'),
      field(accessType='inputOnly',appinfo='allowed values: round or square default is round',name='set_outerSwitchStyle',type='SFString'),
      field(accessType='initializeOnly',appinfo='allowed values: round square. default is round',name='innerSwitchStyle',type='SFString'),
      field(accessType='inputOnly',appinfo='allowed values: round square. default is round',name='set_innerSwitchStyle',type='SFString'),
      field(accessType='initializeOnly',appinfo='time delay for button movement so for color change default is 0.5 sec.',name='delayInterval',type='SFTime')]),
    Transform(DEF='RoundRound',translation=(-.7,0,0),
      children=[
      ProtoInstance(name='PushButton',
        fieldValue=[
        fieldValue(name='outerSwitchStyle',value='square'),
        fieldValue(name='innerSwitchStyle',value='round'),
        fieldValue(name='outerShapeMaterial',
          children=[
          Material(ambientIntensity=0.25,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.06,specularColor=(0.641609,0.651044,0.979592),
            #  Universal Media Library: Metals 17 
            )]),
        fieldValue(name='defaultMaterial',
          children=[
          Material(diffuseColor=(0,0.8,0),shininess=0.35)]),
        fieldValue(name='toggleMaterial',
          children=[
          Material(diffuseColor=(0.8,0,0),shininess=0.35)])])]),
    Transform(DEF='RoundSquare',translation=(.7,0,0),
      children=[
      ProtoInstance(name='PushButton',
        fieldValue=[
        fieldValue(name='traceEnabled',value=True),
        fieldValue(name='outerSwitchStyle',value='round'),
        fieldValue(name='innerSwitchStyle',value='square'),
        fieldValue(name='outerShapeMaterial',
          children=[
          Material(ambientIntensity=0.25,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.06,specularColor=(0.641609,0.651044,0.979592),
            #  Universal Media Library: Metals 17 
            )]),
        fieldValue(name='defaultMaterial',
          children=[
          Material(ambientIntensity=0,diffuseColor=(0,0,0),emissiveColor=(0,1,0.168349),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449),
            #  Universal Media Library: Neon 5 
            )]),
        fieldValue(name='toggleMaterial',
          children=[
          Material(ambientIntensity=0,diffuseColor=(0,0,0),emissiveColor=(1,0,0.080733),shininess=0.05102,specularColor=(0.622449,0.622449,0.622449),
            #  Universal Media Library: Neon 17 
            )]),
        fieldValue(name='delayInterval',value=1)])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PushButtonExample.py")
