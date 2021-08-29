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
    meta(content='SeaGlider.x3d',name='title'),
    meta(content='Seaglider autonomous underwater vehicle (AUV) A collaborative effort between Applied Physics Lab - University of Washington and the University of Washington School of Oceanography.',name='description'),
    meta(content='Joseph L. Chacon',name='creator'),
    meta(content='7 May 2004',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http://www.apl.washington.edu/projects/seaglider/specifications.html',name='reference'),
    meta(content='eriksen_et_al_2001.pdf',name='reference'),
    meta(content='http://www.apl.washington.edu/downloads/eriksen_et_al_2001.pdf',name='reference'),
    meta(content='http://www.apl.washington.edu/projects/seaglider/images.html',name='Image'),
    meta(content='SeaGlider/images_seaglider_01.jpg',name='Image'),
    meta(content='SeaGlider/images_seaglider_02.jpg',name='Image'),
    meta(content='SeaGlider/images_seaglider_03.jpg',name='Image'),
    meta(content='SeaGlider/images_seaglider_04.jpg',name='Image'),
    meta(content='SeaGlider/images_seaglider_05.jpg',name='Image'),
    meta(content='SeaGlider, Autonomous Underwater Vehicle, AUV, University of Washington',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/SeaGlider.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(DEF='Background',groundColor=[(0,0,.8)],skyColor=[(0,0,.8)]),
    Viewpoint(DEF='Front_Far',description='SeaGlider UUV, view from starboard',position=(0,0,4)),
    LOD(range=[15],
      children=[
      Group(DEF='ViewpointGroup',
        children=[
        Viewpoint(description='over-the-shoulder view',orientation=(0,1,0,-1.57),position=(-5,1,0)),
        Viewpoint(description='view from port side',orientation=(0,1,0,3.141592653),position=(0,0,-4)),
        Viewpoint(description='view from ahead',orientation=(0,1,0,1.57),position=(5,0,0)),
        Viewpoint(description='view from above, 10m',orientation=(1,0,0,-1.57),position=(0,10,0)),
        Viewpoint(DEF='oblique',description='oblique view',orientation=(-.814,.581,-.007,1.222),position=(4,5.75,2.6))]),
      WorldInfo(info=["null node"])]),
    #  Actual length of SeaGlider body is 1.8 meters. Scale SeaGliderTransform node to .2 .2 .2 for one to one scale. 
    Transform(DEF='SeaGliderTransform',scale=(0.19889,0.19889,0.19889),
      children=[
      Transform(DEF='BodyTransform',
        children=[
        Shape(DEF='Body',
          appearance=Appearance(
            material=Material(DEF='Shiny_Yellow_mat',diffuseColor=(1,1,0),shininess=1.0,specularColor=(1,1,.9))),
          geometry=Extrusion(beginCap=False,creaseAngle=3.14,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,scale=[(.05,.05),(.1,.1),(.2,.2),(.3,.3),(.4,.4),(.5,.5),(.6,.6),(.7,.7),(.8,.8),(.8,.8),(.7,.7),(.6,.6),(.5,.5),(.4,.4),(.3,.3),(.2,.2),(.2,.2)],spine=[(5.85,0,0),(5.8,0,0),(5.4,0,0),(4.9,0,0),(4.4,0,0),(3.8,0,0),(3.1,0,0),(2.2,0,0),(.7,0,0),(0,0,0),(-.5,0,0),(-.8,0,0),(-1.1,0,0),(-1.4,0,0),(-1.8,0,0),(-2.3,0,0),(-3.2,0,0)])),
        Transform(DEF='NosePlugTransform',rotation=(0,0,1,1.571),scale=(.49,.49,.49),translation=(5.79,0,0),
          children=[
          Shape(DEF='NosePlug',
            appearance=Appearance(
              material=Material(DEF='Black',diffuseColor=(0,0,0))),
            geometry=Cylinder(height=0.2,radius=0.100))])]),
      Transform(DEF='RightWingTransform',translation=(0,-.025,1),
        children=[
        Shape(DEF='Wing',
          appearance=Appearance(
            material=Material(USE='Black')),
          geometry=Extrusion(creaseAngle=0.524,crossSection=[(0,-.5),(-1.2,-.9),(-1.2,0),(-1.2,1),(-1.2,1.8),(-.3,1.8),(0,-.5),(0,-.5)],spine=[(0,0,0),(0,.05,0)]))]),
      Transform(DEF='LeftWingTransform',rotation=(1,0,0,3.142),translation=(0,.025,-1),
        children=[
        Shape(USE='Wing')]),
      Transform(DEF='TopTailTransform',rotation=(1,0,0,-1.57),translation=(-3,.05,.025),
        children=[
        Shape(DEF='Tail',
          appearance=Appearance(
            material=Material(USE='Black')),
          geometry=Extrusion(crossSection=[(0,0),(.3,0),(.35,.2),(.4,.2),(.2,.9),(0,.9)],spine=[(0,0,0),(0,.025,0)]))]),
      Transform(DEF='BottomTailTransform',rotation=(1,0,0,1.57),translation=(-3,-.05,-.0125),
        children=[
        Shape(USE='Tail')]),
      Transform(DEF='SensorTransform',
        children=[
        Group(DEF='Sensor',
          children=[
          Transform(DEF='SensorBaseTransform',translation=(-.4,.775,0),
            children=[
            Shape(DEF='SensorBase',
              appearance=Appearance(
                material=Material(USE='Black')),
              geometry=Box(size=(.5,.2,.05)))]),
          Transform(DEF='SilverSensorTransform',rotation=(0,0,1,1.571),translation=(-.5,.9,0),
            children=[
            Shape(DEF='SilverSensor',
              appearance=Appearance(
                material=Material(DEF='ShinyWhite',diffuseColor=(1,1,1),shininess=0.100,specularColor=(1,1,1))),
              geometry=Cylinder(height=0.950,radius=0.040))]),
          Transform(DEF='BlackSensorTransform',rotation=(0,0,1,1.571),translation=(-.47,.9,0),
            children=[
            Shape(DEF='BlackSensor',
              appearance=Appearance(
                material=Material(USE='Black')),
              geometry=Cylinder(height=0.650,radius=0.045))])])]),
      Transform(DEF='AntennaMountTransform',
        children=[
        Shape(DEF='Antenna_Mount',
          appearance=Appearance(
            material=Material(DEF='Gray',diffuseColor=(.6,.6,.6))),
          geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.198,.198),(.1,.1)],spine=[(-3.2,0,0),(-3.4,0,0)]))]),
      Transform(DEF='AntennaTransform',
        children=[
        Group(DEF='Antenna',
          children=[
          Transform(DEF='GlowingAntennaTransform',rotation=(0,0,1,1.571),translation=(-6.367,0,0),
            children=[
            Shape(DEF='GlowingAntenna',
              appearance=Appearance(
                material=Material(DEF='GlowingWhite',diffuseColor=(1,1,1),emissiveColor=(0.5,0.5,0.5),shininess=0.100,specularColor=(1,1,1))),
              geometry=Cylinder(height=6.0,radius=0.050))]),
          Transform(DEF='BlackAntennaTransform',rotation=(0,0,1,1.571),translation=(-9.514,0,0),
            children=[
            Shape(DEF='BlackAntenna',
              appearance=Appearance(
                material=Material(USE='Black')),
              geometry=Cylinder(height=0.300,radius=0.050))]),
          Transform(DEF='WhiteAntennaTransform',rotation=(0,0,1,1.571),translation=(-9.765,0,0),
            children=[
            Shape(DEF='WhiteAntenna',
              appearance=Appearance(
                material=Material(DEF='White',diffuseColor=(1,1,1))),
              geometry=Cylinder(height=0.2,radius=0.050))]),
          Transform(DEF='GrayAntennaTransform',rotation=(0,0,1,1.571),translation=(-10.064,0,0),
            children=[
            Shape(DEF='GrayAntenna',
              appearance=Appearance(
                material=Material(DEF='LightGray',diffuseColor=(.8,.8,.8))),
              geometry=Cylinder(height=0.400,radius=0.050))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaGlider.py")
