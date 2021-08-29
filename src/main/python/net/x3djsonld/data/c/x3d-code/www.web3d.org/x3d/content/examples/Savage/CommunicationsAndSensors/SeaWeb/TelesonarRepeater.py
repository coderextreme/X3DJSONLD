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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(level=3,name='Navigation'),
    meta(content='TelesonarRepeater.x3d',name='title'),
    meta(content='SeaWeb Telesonar Undersea Repeater',name='description'),
    meta(content='Joseph L. Chacon',name='creator'),
    meta(content='28 May 2004',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.demine.org/symposia/5th-NPS-2002/PAPERS/RICE.PDF',name='reference'),
    meta(content='RiceUnderseaNetworkedAcousticCommunicationsUUST2002.pdf',name='reference'),
    meta(content='http://www.benthos.com/pdf/Modems/ModemBrochure.pdf',name='reference'),
    meta(content='ModemBrochure.pdf',name='reference'),
    meta(content='TelesonarRepeater.jpg',name='Image'),
    meta(content='SeaWeb, Radio Communitions Buoy, Telesonar Repeater',name='subject'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/TelesonarRepeater.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(DEF='Background',groundColor=[(0,0,.8)],skyColor=[(0.2,0.2,.8)]),
    Viewpoint(description='Telesonar Undersea Repeater',position=(0,5,13)),
    #  TODO <ViewpointGroup description='Telesonar Repeater viewpoints' size='15 15 15'> </ViewpointGroup> 
    Viewpoint(description='Telesonar Repeater view from below',orientation=(.157,.967,-.2,1.97),position=(6.97021,-1.1004,-2.21107)),
    Viewpoint(description='Telesonar Repeater oblique view',orientation=(-.232,.867,.442,2.341),position=(3.44442,9.73034,-2.74393)),
    Viewpoint(description='Telesonar Repeater side view, 10m',orientation=(0,1,0,-1.57),position=(-10,3,0)),
    LOD(range=[100,1000],
      children=[
      Transform(DEF='TelesonarRepeaterTransform',
        children=[
        Transform(DEF='ATM885ModemTransform',translation=(0.15,2.231,-0.228),
          children=[
          Group(DEF='ATM885Modem',
            children=[
            Transform(DEF='Brace1Transform',translation=(0,-.2,0),
              children=[
              Shape(DEF='Brace',
                appearance=Appearance(
                  material=Material(DEF='BlackMaterial',diffuseColor=(.1,.1,.1))),
                geometry=Box(size=(.25,.05,.25)))]),
            Transform(DEF='BodyTransform',
              children=[
              Shape(DEF='Body',
                appearance=Appearance(
                  material=Material(USE='BlackMaterial')),
                geometry=Cylinder(height=0.707,radius=0.089))]),
            Transform(DEF='Brace2Transform',translation=(0,.2,0),
              children=[
              Shape(USE='Brace')]),
            Transform(DEF='MountBracketTransform',translation=(-.137,.046,.099),
              children=[
              Shape(DEF='MountBracket',
                appearance=Appearance(
                  material=Material(DEF='SilverMaterial',ambientIntensity=0.1922,diffuseColor=(.5075,.5075,.5075),shininess=0.400,specularColor=(.25,.25,.25))),
                geometry=Box(size=(.025,.8,.05)))]),
            Transform(DEF='CableConnection1Transform',
              children=[
              Group(DEF='CableConnection',
                children=[
                Transform(DEF='ConnectorBaseTransform',translation=(0,.325,0),
                  children=[
                  Shape(DEF='ConnectorBase',
                    appearance=Appearance(
                      material=Material(USE='SilverMaterial')),
                    geometry=Cylinder(height=0.100,radius=0.020))]),
                Transform(DEF='ConnectionThreadTransform',translation=(0,.4,0),
                  children=[
                  Shape(DEF='ConnectionTransform',
                    appearance=Appearance(
                      material=Material(USE='SilverMaterial')),
                    geometry=Cylinder(height=0.050,radius=0.010))])])]),
            Transform(DEF='CableConnection2Transform',rotation=(1,0,0,3.142),
              children=[
              Group(USE='CableConnection')]),
            Transform(DEF='SilverRing1Transform',translation=(0,.325,0),
              children=[
              Shape(DEF='SilverRing',
                appearance=Appearance(
                  material=Material(USE='SilverMaterial')),
                geometry=Cylinder(height=0.035,radius=0.092))]),
            Transform(DEF='SilverRing2Transform',translation=(0,-.325,0),
              children=[
              Shape(USE='SilverRing')]),
            Transform(DEF='Guard1Transform',scale=(.125,.1,.125),translation=(0,.35,0),
              children=[
              Shape(DEF='Guard',
                appearance=Appearance(
                  material=Material(USE='BlackMaterial')),
                geometry=Extrusion(beginCap=False,creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,scale=[(.70,.70),(.675,.675),(.65,.65),(.675,.675),(.70,.70)],solid=False,spine=[(0,0,0),(0,.2,0),(0,.4,0),(0,.6,0),(0,.8,0)]))]),
            Transform(DEF='Guard2Transform',rotation=(1,0,0,3.14),scale=(.125,.1,.125),translation=(0,-.35,0),
              children=[
              Shape(USE='Guard')]),
            Transform(DEF='CableloopTransform',rotation=(1,0,0,2.1),scale=(.1,.1,.1),translation=(-.15,.5,.15),
              children=[
              Shape(DEF='Loop',
                appearance=Appearance(
                  material=Material(USE='SilverMaterial')),
                geometry=Extrusion(beginCap=False,creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,scale=[(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075),(.075,.075)],solid=False,spine=[(1.00,0,0.00),(0.92,0,-0.38),(0.71,0,-0.71),(0.38,0,-0.92),(0.00,0,-1.00),(-0.38,0,-0.92),(-0.71,0,-0.71),(-0.92,0,-0.38),(-1.00,0,-0.00),(-0.92,0,0.38),(-0.71,0,0.71),(-0.38,0,0.92),(0.00,0,1.00),(0.38,0,0.92),(0.71,0,0.71),(0.92,0,0.38),(1.00,0,0.00)]))])])]),
        Transform(DEF='AT408TransducerTransform',rotation=(1,0,0,3.14),translation=(0,3.521,-0.268),
          children=[
          Group(DEF='AT408Transducer',
            children=[
            Transform(DEF='TransducerBodyTransform',
              children=[
              Shape(DEF='TransducerBody',
                appearance=Appearance(
                  material=Material(USE='BlackMaterial')),
                geometry=Cylinder(height=0.438,radius=0.075))]),
            Transform(DEF='TransducerSilverring1Transform',translation=(0,.18,0),
              children=[
              Shape(DEF='TransducerSilverRing',
                appearance=Appearance(
                  material=Material(USE='SilverMaterial')),
                geometry=Cylinder(height=0.035,radius=0.078))]),
            Transform(DEF='TransducerConnectionGuard',scale=(.11,.1,.11),translation=(0,.2,0),
              children=[
              Shape(USE='Guard')]),
            Transform(DEF='TransducerLoopTransform',rotation=(1,0,0,2.443),scale=(.1,.1,.1),translation=(.004,-.335,-.165),
              children=[
              Shape(USE='Loop')]),
            Transform(DEF='TransducerCableConnectionTransform',translation=(0,-.15,0),
              children=[
              Group(USE='CableConnection')]),
            Transform(DEF='TransducerSilverRing2Transform',translation=(0,-.14,.002),
              children=[
              Shape(USE='TransducerSilverRing')]),
            Transform(DEF='TransducerGuardTransfrom',
              children=[
              Group(DEF='TransducerGuard',
                children=[
                Transform(DEF='GuardBaseTransform',translation=(0,-.23,-.1),
                  children=[
                  Shape(DEF='Cylinder2',
                    appearance=Appearance(
                      material=Material(USE='SilverMaterial')),
                    geometry=Cylinder(height=0.140,radius=0.008))]),
                Transform(DEF='GuardSupport1Transform',translation=(0,-.23,.1),
                  children=[
                  Shape(USE='Cylinder2')]),
                Transform(DEF='GuardBottomTransform',translation=(0,-.16,0),
                  children=[
                  Shape(DEF='Cylinder1',
                    appearance=Appearance(
                      material=Material(USE='SilverMaterial')),
                    geometry=Cylinder(height=0.010,radius=0.125))]),
                Transform(DEF='GuardTopTransform',translation=(0,-.3,0),
                  children=[
                  Shape(USE='Cylinder1')]),
                Transform(DEF='GuardSupport3Transform',translation=(.1,-.23,0),
                  children=[
                  Shape(USE='Cylinder2')]),
                Transform(DEF='GuardSupport4Transform',translation=(-.1,-.23,0),
                  children=[
                  Shape(USE='Cylinder2')])])]),
            Transform(DEF='TransducerTransform',translation=(0,-.2,0),
              children=[
              Shape(DEF='Transducer',
                appearance=Appearance(
                  material=Material(USE='BlackMaterial')),
                geometry=Cylinder(height=0.075,radius=0.085))])])]),
        Transform(DEF='FloatAssembleTransform',
          children=[
          Group(DEF='FloatAssemble',
            children=[
            Transform(DEF='FloatTransform',translation=(0,6.3,0),
              children=[
              Shape(DEF='Float',
                appearance=Appearance(
                  material=Material(DEF='OrangeMaterial',diffuseColor=(1,.4,0),shininess=.4)),
                geometry=Sphere(radius=.3)),
              Transform(DEF='FloatLoop1Transform',rotation=(0,1,0,1.57),scale=(.025,.025,.025),translation=(0,-.3,0),
                children=[
                Transform(DEF='FloatLoopTransform',rotation=(1,0,0,1.57),
                  children=[
                  Shape(DEF='FloatLoop',
                    appearance=Appearance(
                      material=Material(USE='OrangeMaterial')),
                    geometry=Extrusion(beginCap=False,creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,scale=[(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09)],solid=False,spine=[(1.00,0,0.00),(0.92,0,-0.38),(0.71,0,-0.71),(0.38,0,-0.92),(0.00,0,-1.00),(-0.38,0,-0.92),(-0.71,0,-0.71),(-0.92,0,-0.38),(-1.00,0,-0.00),(-0.92,0,0.38),(-0.71,0,0.71),(-0.38,0,0.92),(0.00,0,1.00),(0.38,0,0.92),(0.71,0,0.71),(0.92,0,0.38),(1.00,0,0.00)]))])])]),
            Transform(DEF='TopLoopAssemblyTransform',rotation=(1,0,0,1.57),scale=(.1,.1,.1),translation=(0,5.89,0),
              children=[
              Shape(USE='Loop')]),
            Transform(DEF='RopeTransform',translation=(0,3.6,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='YelloMaterial',diffuseColor=(1,1,0))),
                geometry=Cylinder(height=4,radius=.02)),
              Transform(DEF='TopRopeLoopTransform',rotation=(0,1,0,1.57),translation=(0,2.1,0),
                children=[
                Transform(DEF='TopRopeLoop2Transform',rotation=(1,0,0,1.57),scale=(0.061,.1,.1),
                  children=[
                  Shape(DEF='RopeLoop',
                    appearance=Appearance(
                      material=Material(USE='YelloMaterial')),
                    geometry=Extrusion(beginCap=False,creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,scale=[(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09)],solid=False,spine=[(1.00,0,0.00),(0.92,0,-0.38),(0.71,0,-0.71),(0.38,0,-0.92),(0.00,0,-1.00),(-0.38,0,-0.92),(-0.71,0,-0.71),(-0.92,0,-0.38),(-1.00,0,-0.00),(-0.92,0,0.38),(-0.71,0,0.71),(-0.38,0,0.92),(0.00,0,1.00),(0.38,0,0.92),(0.71,0,0.71),(0.92,0,0.38),(1.00,0,0.00)]))])]),
              Transform(DEF='TransducerRopeLoopTransform',rotation=(0,1,0,1.57),scale=(0.061,.1,.1),translation=(0,0.38,0),
                children=[
                Transform(DEF='TranducerRopeLoop2Transform',rotation=(1,0,0,1.57),
                  children=[
                  Shape(USE='RopeLoop')])]),
              Transform(DEF='ModemRopeLoopTransform',rotation=(0,1,0,1.57),scale=(0.061,.1,.1),translation=(0,-0.72,0),
                children=[
                Transform(DEF='ModemrRopeLoop2Transform',rotation=(1,0,0,1.57),
                  children=[
                  Shape(USE='RopeLoop')])]),
              Transform(DEF='BottomRopeLoopTransform',rotation=(0,1,0,1.57),translation=(0,-2.1,0),
                children=[
                Transform(DEF='BottomRopeLoop2Transform',rotation=(1,0,0,1.57),scale=(0.061,.1,.1),
                  children=[
                  Shape(USE='RopeLoop')])])]),
            Transform(DEF='BaseTransform',
              children=[
              Group(DEF='Base',
                children=[
                Transform(DEF='AnchorLoopTransform',rotation=(.578,.578,-.577,2.093),scale=(.09,.09,.09),translation=(0,0.264,0),
                  children=[
                  Shape(DEF='AnchorLoop',
                    appearance=Appearance(
                      material=Material(DEF='GrayMaterial',diffuseColor=(.75,.75,.75))),
                    geometry=Extrusion(beginCap=False,creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,scale=[(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09),(.09,.09)],solid=False,spine=[(1.00,0,0.00),(0.92,0,-0.38),(0.71,0,-0.71),(0.38,0,-0.92),(0.00,0,-1.00),(-0.38,0,-0.92),(-0.71,0,-0.71),(-0.92,0,-0.38),(-1.00,0,-0.00),(-0.92,0,0.38),(-0.71,0,0.71),(-0.38,0,0.92),(0.00,0,1.00),(0.38,0,0.92),(0.71,0,0.71),(0.92,0,0.38),(1.00,0,0.00)]))]),
                Transform(DEF='BaseLoop1Translation',rotation=(1,0,0,1.571),scale=(.025,.025,.025),translation=(0,.36,0),
                  children=[
                  Shape(DEF='BaseLoop1',
                    appearance=Appearance(
                      material=Material(USE='GrayMaterial')),
                    geometry=Extrusion(beginCap=False,creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,scale=[(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4)],solid=False,spine=[(1.00,0,0.00),(0.92,0,-0.38),(0.71,0,-0.71),(0.38,0,-0.92),(0.00,0,-1.00),(-0.38,0,-0.92),(-0.71,0,-0.71),(-0.92,0,-0.38),(-1.00,0,-0.00),(-0.92,0,0.38),(-0.71,0,0.71),(-0.38,0,0.92),(0.00,0,1.00),(0.38,0,0.92),(0.71,0,0.71),(0.92,0,0.38),(1.00,0,0.00)]))]),
                Transform(DEF='AnchorTranslation',translation=(.011,-.003,0),
                  children=[
                  Shape(DEF='Anchor',
                    appearance=Appearance(
                      material=Material(USE='GrayMaterial')),
                    geometry=Extrusion(creaseAngle=0.524,crossSection=[(-.4,-.3),(-.4,0),(-.4,.3),(0,.3),(.4,.3),(.4,0),(.4,-.3),(.3,-.3),(0,-.3),(-.4,-.3)],scale=[(1,1),(.75,.75)],spine=[(0,0,0),(0,.3,0)]))]),
                Transform(DEF='dad_Cylinder5',translation=(0,.617,0),
                  children=[
                  Shape(DEF='Cylinder5',
                    appearance=Appearance(
                      material=Material(USE='GrayMaterial')),
                    geometry=Cylinder(height=0.45,radius=0.01))]),
                Transform(DEF='dad_Cylinder4',translation=(0,.884,0),
                  children=[
                  Shape(DEF='Cylinder4',
                    appearance=Appearance(
                      material=Material(USE='GrayMaterial')),
                    geometry=Cylinder(height=0.6,radius=0.025))]),
                Transform(DEF='BaseLoop2Transform',rotation=(1,0,0,1.571),scale=(.025,.025,.025),translation=(0,1.39,0),
                  children=[
                  Shape(DEF='BaseLoop2',
                    appearance=Appearance(
                      material=Material(USE='GrayMaterial')),
                    geometry=Extrusion(beginCap=False,creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,scale=[(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4),(.4,.4)],solid=False,spine=[(1.00,0,0.00),(0.92,0,-0.38),(0.71,0,-0.71),(0.38,0,-0.92),(0.00,0,-1.00),(-0.38,0,-0.92),(-0.71,0,-0.71),(-0.92,0,-0.38),(-1.00,0,-0.00),(-0.92,0,0.38),(-0.71,0,0.71),(-0.38,0,0.92),(0.00,0,1.00),(0.38,0,0.92),(0.71,0,0.71),(0.92,0,0.38),(1.00,0,0.00)]))]),
                Transform(DEF='dad_Cylinder3',translation=(0,1.109,0),
                  children=[
                  Shape(DEF='Cylinder3',
                    appearance=Appearance(
                      material=Material(USE='GrayMaterial')),
                    geometry=Cylinder(height=0.5,radius=0.01))])])])])]),
        Transform(DEF='CableTransform',
          children=[
          Shape(DEF='Cable',
            appearance=Appearance(
              material=Material(USE='BlackMaterial')),
            geometry=Extrusion(creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.01,.01),(.01,.01),(.01,.01),(.01,.01),(.01,.01),(.01,.01),(.01,.01)],solid=False,spine=[(0.15,2.631,-0.228),(0.15,2.7,-0.228),(0.16,2.9,-0.23),(0.13,3.0,-0.23),(0.075,3.1,-.24),(0.0375,3.175,-.26),(0,3.253,-0.269)]))])]),
      Transform(DEF='LowResTransform',
        children=[
        Transform(DEF='LowResFloatTransform',translation=(0,6.307,0),
          children=[
          Shape(DEF='LowResFloat',
            appearance=Appearance(
              material=Material(diffuseColor=(1,.4,0))),
            geometry=Sphere(radius=0.320))]),
        Transform(DEF='LowResBaseTransform',translation=(0,.928,0),
          children=[
          Shape(DEF='LowResBase',
            appearance=Appearance(
              material=Material(diffuseColor=(.5,.5,.5))),
            geometry=Cylinder(height=1.479,radius=0.020))]),
        Transform(DEF='LowResModemTransform',translation=(0.138,2.222,-0.233),
          children=[
          Shape(DEF='LowResModem',
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0))),
            geometry=Cylinder(height=0.928,radius=0.110))]),
        Transform(DEF='LowResRopeTransform',translation=(0,3.919,0),
          children=[
          Shape(DEF='LowResRope',
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,0))),
            geometry=Cylinder(height=5.227,radius=0.017))]),
        Transform(DEF='LowResTransducerTransform',translation=(0,3.52,-0.254),
          children=[
          Shape(DEF='LowResTransducer',
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0))),
            geometry=Cylinder(height=0.552,radius=0.091))]),
        Transform(DEF='dad_Box1',translation=(0,.187,0),
          children=[
          Shape(DEF='Box1',
            appearance=Appearance(
              material=Material(diffuseColor=(.7,.7,.7))),
            geometry=Box(size=(.624,.38454,1)))])]),
      WorldInfo(),])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TelesonarRepeater.py")
