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
    meta(content='HiddenViewpointPrototype.x3d',name='title'),
    meta(content="Prototype to produce hidden viewpoints that becomes active (binds) upon pointer selection to reveal an interesting view, with an optionally label. Especially cool is deselecting: the user returns to wherever the previous viewpoint was. Numerous HiddenViewpoints can be used without cluttering up the browser's viewpoint description list.",name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='1 May 2001',name='created'),
    meta(content='8 April 2012',name='modified'),
    meta(content='HiddenViewpointTest-WaypointInterpolator.png',name='Image'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/HiddenViewpointTest-WaypointInterpolator.png',name='Image'),
    meta(content='WaypointInterpolatorExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/HiddenViewpointPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Hidden viewpoint becomes active (binds) upon pointer selection to reveal an interesting view with an optionally label',name='HiddenViewpoint',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='position',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='rotation',type='SFRotation',value=(0,1,0,0)),
        field(accessType='initializeOnly',name='sensorRadius',type='SFFloat',value=1),
        field(accessType='inputOnly',name='activate',type='SFBool'),
        field(accessType='inputOutput',name='label',type='MFString'),
        field(accessType='inputOutput',name='labelOffset',type='SFVec3f',value=(0,-1,0)),
        field(accessType='initializeOnly',name='labelFontSize',type='SFFloat',value=1),
        field(accessType='inputOutput',name='labelColor',type='SFColor',value=(0.8,0.8,0.8))]),
      ProtoBody=ProtoBody(
        #  Touchable Sphere to bind a labeled local viewpoint while clicked... 
        children=[
        Transform(DEF='LocationTransform',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='position'),
            connect(nodeField='center',protoField='position'),
            connect(nodeField='rotation',protoField='rotation')]),
          children=[
          Shape(
            geometry=Sphere(DEF='TransparentSphere',
              IS=IS(
                connect=[
                connect(nodeField='radius',protoField='sensorRadius')])),
            appearance=Appearance(
              material=Material(transparency=1))),
          TouchSensor(DEF='InvisibleTouchSensorNoDescription'),
          Transform(DEF='HiddenViewpointTransform',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='labelOffset')]),
            #  No description is provided for HiddenViewpoint so that it does NOT appear in the viewpoint list. 
            children=[
            Viewpoint(DEF='HiddenViewNoDescription',position=(0,0,4),
              IS=IS(
                connect=[
                connect(nodeField='set_bind',protoField='activate')]))]),
          LOD(DEF='LabelTextLOD',range=[8],
            children=[
            Group(
              children=[
              Transform(DEF='LabelTransform',
                IS=IS(
                  connect=[
                  connect(nodeField='translation',protoField='labelOffset')]),
                children=[
                Shape(
                  geometry=Text(DEF='LabelText',
                    IS=IS(
                      connect=[
                      connect(nodeField='string',protoField='label')]),
                    fontStyle=FontStyle(DEF='LabelFontStyle',justify=["MIDDLE","MIDDLE"],
                      IS=IS(
                        connect=[
                        connect(nodeField='size',protoField='labelFontSize')]))),
                  appearance=Appearance(
                    material=Material(DEF='TextMaterial',diffuseColor=(0,0,0),
                      IS=IS(
                        connect=[
                        connect(nodeField='emissiveColor',protoField='labelColor')])),
                    #  emissiveColor used for TextMaterial so that label is visible regardless. Thus diffuseColor set to (0 0 0) so that default value (0.8 0.8 0.8) doesn't wash out emissive. 
                    ))])]),
            WorldInfo(info=["null node"])])]),
        ROUTE(fromField='isActive',fromNode='InvisibleTouchSensorNoDescription',toField='set_bind',toNode='HiddenViewNoDescription')])),
    #  ====================================== 
    Viewpoint(description='HiddenViewpoint launch',position=(0,0,12)),
    Anchor(description='WaypointInterpolator example',parameter=["target=_blank"],url=["WaypointInterpolatorExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorExample.x3d","WaypointInterpolatorExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["Click on this text to see","HiddenViewpoint example use","","then click beneath origin axes","in WaypointInterpolator","example scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HiddenViewpointPrototype.py")
