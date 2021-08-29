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
    meta(content='RunningLightsPrototype.x3d',name='title'),
    meta(content='Andrew Wiest',name='creator'),
    meta(content='6 May 2001',name='created'),
    meta(content='23 December 2014',name='modified'),
    meta(content='Prototype for ship Running Lights that can be adapted to any surface ship (or surfaced submarine). These are not usable for aircraft, since those lights are omnidirectional.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/RunningLights/RunningLightsPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  This node provides standard running lights for vessels > 50 meters in length 
    children=[
    ProtoDeclare(name='RunningLights',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='StbdRunningLightPosition',type='SFVec3f',value=(-80,24.8,23)),
        field(accessType='initializeOnly',name='StbdRunningLightScale',type='SFVec3f',value=(6,6,6)),
        field(accessType='initializeOnly',name='StbdRunningLightOnOffSwitch',type='SFColor',value=(0,1,0)),
        field(accessType='initializeOnly',name='SternLightPosition',type='SFVec3f',value=(-125,10,0)),
        field(accessType='initializeOnly',name='SternLightScale',type='SFVec3f',value=(6,6,6)),
        field(accessType='initializeOnly',name='WhiteRunningLightOnOffSwitch',type='SFColor',value=(1,1,1)),
        field(accessType='initializeOnly',name='PortRunningLightPosition',type='SFVec3f',value=(-80,24.8,-23)),
        field(accessType='initializeOnly',name='PortRunningLightScale',type='SFVec3f',value=(6,6,6)),
        field(accessType='initializeOnly',name='PortRunningLightOnOffSwitch',type='SFColor',value=(1,0,0)),
        field(accessType='initializeOnly',name='LowerMastHeadLightPosition',type='SFVec3f',value=(151.4,19.7,0)),
        field(accessType='initializeOnly',name='LowerMastHeadLightScale',type='SFVec3f',value=(6,6,6)),
        field(accessType='initializeOnly',name='UpperMastHeadLightPosition',type='SFVec3f',value=(-92.1,37.9,0)),
        field(accessType='initializeOnly',name='UpperMastHeadLightScale',type='SFVec3f',value=(1,1,1)),
        field(accessType='initializeOnly',name='FwdAnchorLightPosition',type='SFVec3f',value=(151.4,20,0)),
        field(accessType='initializeOnly',name='FwdAnchorLightScale',type='SFVec3f',value=(6,6,6)),
        field(accessType='initializeOnly',name='AnchorLightsOnOffSwitch',type='SFColor',value=(0,0,0)),
        field(accessType='initializeOnly',name='AftAnchorLightPosition',type='SFVec3f',value=(-125,15,0)),
        field(accessType='initializeOnly',name='AftAnchorLightScale',type='SFVec3f',value=(1,1,1))]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='RunningLightsGeneric',
          children=[
          Transform(DEF='StbdRunningLightPositioningNode',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='StbdRunningLightPosition')]),
            children=[
            Transform(DEF='StbdRunningLight',
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='StbdRunningLightScale')]),
              children=[
              Transform(DEF='StbdRunningLightBlackBlockingboards',
                children=[
                Transform(translation=(-.04,0,-.07),
                  children=[
                  Transform(DEF='GenericBlockingBoard',
                    children=[
                    Transform(translation=(.25,0,0),
                      children=[
                      Shape(
                        geometry=Box(size=(.5,.2,.01)),
                        appearance=Appearance(DEF='BlackMetalForRunningLights',
                          material=Material(diffuseColor=(0,0,0),shininess=.5,specularColor=(.3,.3,.3))))])]),
                  Transform(DEF='StbdRunningLightSideBoard',rotation=(0,1,0,-1.963495),
                    children=[
                    Transform(USE='GenericBlockingBoard')]),
                  Transform(DEF='TopTriangleCoverStbd',scale=(.4,.4,.4),translation=(0,.1,0),
                    children=[
                    Shape(DEF='TopTriangleStbdRunningLight',
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,0],solid=False,
                        coord=Coordinate(point=[(0,0,0),(1,0,0),(-.38268,0,.92388)])),
                      appearance=Appearance(USE='BlackMetalForRunningLights'))]),
                  Transform(DEF='BottomTriangleCoverStbd',scale=(.4,.4,.4),translation=(0,-.1,0),
                    children=[
                    Shape(USE='TopTriangleStbdRunningLight')])])]),
              Transform(DEF='GreenRunningLightSource',
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(DEF='GreenLightMaterialNode',ambientIntensity=1,diffuseColor=(0,0,0),emissiveColor=(0,1,0),shininess=1,
                      IS=IS(
                        connect=[
                        connect(nodeField='emissiveColor',protoField='StbdRunningLightOnOffSwitch')]))),
                  geometry=Cylinder(height=.15,radius=.06)),
                PointLight(ambientIntensity=1,attenuation=(1,.5,0),color=(0,1,0),location=(.07,0,.07),on=False,radius=4)])])]),
          Transform(DEF='SternLightPositioningNode',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='SternLightPosition')]),
            children=[
            Transform(DEF='SternLight',
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='SternLightScale')]),
              children=[
              Transform(DEF='SternLightBlockingBoards',
                children=[
                Transform(scale=(.4,.4,.4),translation=(0,.1,0),
                  children=[
                  Shape(DEF='SternLightTopTriangle',
                    geometry=IndexedFaceSet(coordIndex=[0,1,2,0],solid=False,
                      coord=Coordinate(point=[(0,0,0),(-.38268,0,.92388),(-.38268,0,-.92388)])),
                    appearance=Appearance(USE='BlackMetalForRunningLights'))]),
                Transform(scale=(.4,.4,.4),translation=(0,-.1,0),
                  children=[
                  Shape(USE='SternLightTopTriangle')]),
                Transform(DEF='SternLightSideBoards',
                  children=[
                  Transform(rotation=(0,1,0,-1.963495),
                    children=[
                    Transform(DEF='SternLightRightSideBoard',
                      children=[
                      Transform(USE='GenericBlockingBoard')])]),
                  Transform(rotation=(0,1,0,1.963495),
                    children=[
                    Transform(USE='SternLightRightSideBoard')])])]),
              Transform(DEF='WhiteSternLightSource',translation=(-.08,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(DEF='WhiteLightMaterialNode',ambientIntensity=1,diffuseColor=(0,0,0),emissiveColor=(1,1,1),shininess=1,
                      IS=IS(
                        connect=[
                        connect(nodeField='emissiveColor',protoField='WhiteRunningLightOnOffSwitch')]))),
                  geometry=Cylinder(height=.15,radius=.06)),
                PointLight(ambientIntensity=1,attenuation=(1,.5,0),location=(-.12,0,0),on=False,radius=4)])])]),
          Transform(DEF='PortRunningLightPositioningNode',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='PortRunningLightPosition')]),
            children=[
            Transform(DEF='PortRunningLight',rotation=(1,0,0,3.14159),
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='PortRunningLightScale')]),
              children=[
              Transform(DEF='PortRunningLightBlackBlockingBoards',
                children=[
                Transform(USE='StbdRunningLightBlackBlockingboards')]),
              Transform(DEF='RedRunningLightSource',
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(DEF='RedLightMaterialNode',ambientIntensity=1,diffuseColor=(0,0,0),emissiveColor=(1,0,0),shininess=1,
                      IS=IS(
                        connect=[
                        connect(nodeField='emissiveColor',protoField='PortRunningLightOnOffSwitch')]))),
                  geometry=Cylinder(height=.15,radius=.06)),
                PointLight(ambientIntensity=1,attenuation=(1,.5,0),color=(1,0,0),location=(.07,0,.07),on=False,radius=4)])])]),
          Transform(DEF='LowerMastHeadLightPositioningNode',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='LowerMastHeadLightPosition')]),
            children=[
            Transform(DEF='MastHeadLightGeneric',
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='LowerMastHeadLightScale')]),
              children=[
              Transform(USE='SternLightSideBoards'),
              Transform(DEF='LowerMastHeadLightSource',translation=(0.16,0,0),
                children=[
                Transform(USE='WhiteSternLightSource')]),
              Transform(DEF='WhiteLightCovers',translation=(.07,0,0),
                children=[
                Transform(DEF='MastHeadLightTopCover',translation=(0,.08,0),
                  children=[
                  Transform(DEF='GenericMastHeadLightCover',
                    children=[
                    Shape(
                      appearance=Appearance(USE='BlackMetalForRunningLights'),
                      geometry=Cylinder(height=.01,radius=.1))])]),
                Transform(DEF='MastHeadLightBottomCover',translation=(0,-.08,0),
                  children=[
                  Transform(USE='GenericMastHeadLightCover')])])])]),
          Transform(DEF='UpperMastHeadLightPositioningNode',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='UpperMastHeadLightPosition')]),
            children=[
            Transform(DEF='UpperMastHeadLight',
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='UpperMastHeadLightScale')]),
              children=[
              Transform(USE='MastHeadLightGeneric')])]),
          Transform(DEF='FwdAnchorLightPositioningNode',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='FwdAnchorLightPosition')]),
            children=[
            Transform(DEF='FwdAnchorLight',
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='FwdAnchorLightScale')]),
              children=[
              Transform(DEF='WhiteAnchorLightSource',translation=(-.08,0,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(DEF='AnchorLightMaterialNode',ambientIntensity=1,diffuseColor=(0,0,0),emissiveColor=(1,1,1),shininess=1,
                      IS=IS(
                        connect=[
                        connect(nodeField='emissiveColor',protoField='AnchorLightsOnOffSwitch')]))),
                  geometry=Cylinder(DEF='AnchorLightCylinder',height=.15,radius=.06)),
                PointLight(ambientIntensity=1,attenuation=(1,.5,0),location=(-.12,0,0),on=False,radius=4)]),
              Transform(translation=(-.16,0,0),
                children=[
                Transform(USE='WhiteLightCovers')])])]),
          Transform(DEF='AftAnchorLightPositioningNode',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='AftAnchorLightPosition')]),
            children=[
            Transform(DEF='AftAnchorLight',
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='AftAnchorLightScale')]),
              children=[
              Transform(USE='FwdAnchorLight')])])])])),
    #  ==================== 
    #  Example scene using the ProtoDeclaration follows 
    Background(skyColor=[(.2,.2,.2)]),
    NavigationInfo(headlight=False,speed=10),
    Viewpoint(description='100m Running Lights',orientation=(0,1,0,1.571),position=(100,2,0)),
    Group(
      children=[
      Viewpoint(description='1000m Running Lights',orientation=(0,1,0,1.571),position=(1000,2,0)),
      Viewpoint(description='2000m Running Lights',orientation=(0,1,0,1.571),position=(2000,2,0)),
      Viewpoint(description='3000m Running Lights',orientation=(0,1,0,1.571),position=(3000,2,0)),
      Viewpoint(description='4000m Running Lights',orientation=(0,1,0,1.571),position=(4000,2,0)),
      Viewpoint(description='5000m Running Lights',orientation=(0,1,0,1.571),position=(5000,2,0))]),
    Viewpoint(description='6000m Running Lights',orientation=(0,1,0,1.571),position=(6000,2,0)),
    LOD(DEF='CopyThisNode',range=[1000,2000,3000,4000,5000,6000],
      children=[
      Transform(DEF='UpTo1000yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(6,6,6)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(6,6,6)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(6,6,6)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(6,6,6)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(6,6,6)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo2000yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(13,13,13)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(12,12,12)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(13,13,13)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(13,13,13)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(13,13,13)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo3000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(20,20,20)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(20,20,20)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(20,20,20)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(20,20,20)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(20,20,20)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo4000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(26,26,26)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(26,26,26)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(26,26,26)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(26,26,26)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(26,26,26)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo5000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(34,34,34)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(34,34,34)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(34,34,34)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(34,34,34)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(34,34,34)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='UpTo6000Yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(40,40,40)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(40,40,40)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(40,40,40)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(40,40,40)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(40,40,40)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])]),
      Transform(DEF='GreaterThan6000yds',
        children=[
        ProtoInstance(name='RunningLights',
          fieldValue=[
          fieldValue(name='StbdRunningLightPosition',value=(0,0,10)),
          fieldValue(name='StbdRunningLightScale',value=(42,42,42)),
          fieldValue(name='StbdRunningLightOnOffSwitch',value=(0,1,0)),
          fieldValue(name='SternLightPosition',value=(-10,0,0)),
          fieldValue(name='SternLightScale',value=(42,42,42)),
          fieldValue(name='WhiteRunningLightOnOffSwitch',value=(1,1,1)),
          fieldValue(name='PortRunningLightPosition',value=(0,0,-10)),
          fieldValue(name='PortRunningLightScale',value=(42,42,42)),
          fieldValue(name='PortRunningLightOnOffSwitch',value=(1,0,0)),
          fieldValue(name='LowerMastHeadLightPosition',value=(10,10,0)),
          fieldValue(name='LowerMastHeadLightScale',value=(42,42,42)),
          fieldValue(name='UpperMastHeadLightPosition',value=(0,20,0)),
          fieldValue(name='UpperMastHeadLightScale',value=(1,1,1)),
          fieldValue(name='FwdAnchorLightPosition',value=(30,0,0)),
          fieldValue(name='FwdAnchorLightScale',value=(42,42,42)),
          fieldValue(name='AnchorLightsOnOffSwitch',value=(0,0,0)),
          fieldValue(name='AftAnchorLightPosition',value=(-10,10,0)),
          fieldValue(name='AftAnchorLightScale',value=(1,1,1))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RunningLightsPrototype.py")
