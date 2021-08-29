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
    meta(content='C130Hercules.x3d',name='title'),
    meta(content='Model of the Hercule C130 aircraft.',name='description'),
    meta(content='Maj. Mounir Sidhom, Tunisian Air Force',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='3 September 2004',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='not verified to scale',name='warning'),
    meta(content='Extrusion texture transform incorrect for cabine.png',name='warning'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/c-130.htm',name='reference'),
    meta(content='http://fr.wikipedia.org/wiki/Lockheed_C-130_Hercules',name='reference'),
    meta(content='http://en.wikipedia.org/wiki/Lockheed_C-130_Hercules',name='reference'),
    meta(content='http://www.lockheedmartin.com/wms/findPage.do?dsp=fec&ci=11165&rsbci=0&fti=0&ti=0&sc=400',name='reference'),
    meta(content='C130 Hercules aircraft',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/C130Hercules.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.6588,0.7843,1)]),
    Viewpoint(DEF='MainViewPoint',centerOfRotation=(7.5,0,0),description='C130 Hercules',position=(7.5,0,20)),
    Viewpoint(DEF='frontViewPoint',centerOfRotation=(7.5,0,0),description='C130 front',orientation=(0.0,1.0,0.0,1.57),position=(25,-0.5,0.0)),
    Viewpoint(DEF='leftSide',centerOfRotation=(7.5,0,0),description='C130 left side',orientation=(0.0,1.0,0.0,3.14),position=(7.5,0.0,-20.0)),
    Viewpoint(DEF='rearViewPoint',centerOfRotation=(7.5,0,0),description='C130 rear',orientation=(0.0,1.0,0.0,-1.57),position=(-15,0.0,0.0)),
    Viewpoint(DEF='upViewPoint',centerOfRotation=(7.5,0,0),description='looking to the aircraft from down to up',orientation=(1.0,0.0,0.0,1.57),position=(7.5,-20.0,0.0)),
    Viewpoint(DEF='downViewPoint',centerOfRotation=(7.5,0,0),description='looking to the aircraft from up to down',orientation=(1.0,0.0,0.0,-1.57),position=(7.5,20.0,0.0)),
    Transform(
      children=[
      Group(DEF='AIRCRAFT',
        children=[
        Transform(DEF='VERTICAL_EMPENAGE',
          children=[
          Shape(DEF='ShapeVERTICAL_EMPENAGE',
            appearance=Appearance(
              material=Material(diffuseColor=(0.4,0.51,0.35),specularColor=(0.45,0.6,0.4)),
              texture=ImageTexture(url=["flag.png","https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/flag.png"])),
            geometry=Extrusion(convex=False,creaseAngle=0.5,crossSection=[(2.0,0.0),(1.8,-0.05),(1.3,-0.1),(0.6,-0.15),(0.0,-0.15),(-0.25,-0.1),(-0.3,-0.05),(-0.32,0.0),(-0.3,0.05),(-0.25,0.1),(0.0,0.15),(0.6,0.15),(1.3,0.1),(1.8,0.05),(2.0,0.0)],scale=[(1.0,1.0),(0.5,0.5)],spine=[(0.0,0.0,0.0),(0.0,3.0,0.0)]))]),
        Transform(DEF='REAR_WING_LEFT',rotation=(1.0,0.0,0.0,-1.57),
          children=[
          Shape(DEF='ShapeREAR_WING_LEFT',
            appearance=Appearance(
              material=Material(diffuseColor=(0.4,0.51,0.35),specularColor=(0.45,0.6,0.4))),
            geometry=Extrusion(convex=False,creaseAngle=0.5,crossSection=[(2.0,0.0),(1.8,-0.05),(1.3,-0.1),(0.6,-0.15),(0.0,-0.15),(-0.25,-0.1),(-0.3,-0.05),(-0.32,0.0),(-0.3,0.05),(-0.25,0.1),(0.0,0.15),(0.6,0.15),(1.3,0.1),(1.8,0.05),(2.0,0.0)],scale=[(1.0,1.0),(0.5,0.5)],spine=[(0.0,0.0,0.0),(0.0,3.0,0.0)]))]),
        Transform(DEF='REAR_WING_RIGHT',rotation=(1.0,0.0,0.0,1.57),
          children=[
          Shape(DEF='ShapeREAR_WING_RIGHT',
            appearance=Appearance(
              material=Material(diffuseColor=(0.4,0.51,0.35),specularColor=(0.45,0.6,0.4))),
            geometry=Extrusion(convex=False,creaseAngle=0.5,crossSection=[(2.0,0.0),(1.8,-0.05),(1.3,-0.1),(0.6,-0.15),(0.0,-0.15),(-0.25,-0.1),(-0.3,-0.05),(-0.32,0.0),(-0.3,0.05),(-0.25,0.1),(0.0,0.15),(0.6,0.15),(1.3,0.1),(1.8,0.05),(2.0,0.0)],scale=[(1.0,1.0),(0.5,0.5)],spine=[(0.0,0.0,0.0),(0.0,3.0,0.0)]))]),
        Transform(DEF='AILES',rotation=(1.0,0.0,0.0,1.57),translation=(8.0,0.0,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.4,0.55,0.35),specularColor=(0.45,0.6,0.4))),
            geometry=Extrusion(convex=False,creaseAngle=0.5,crossSection=[(0.0,0.0),(-0.03,-0.05),(-0.38,-0.125),(-0.78,-0.15),(-1.03,-0.15),(-1.78,-0.1),(-2.28,-0.05),(-2.53,0.0),(-2.28,0.05),(-1.78,0.1),(-1.03,0.15),(-0.78,0.15),(-0.38,0.125),(-0.03,0.05),(0.0,0.0)],scale=[(0.7,0.7),(1.1,1.1),(1.1,1.1),(0.7,0.7)],spine=[(0.0,-8.0,0.0),(0.0,-3.0,0.0),(0.0,3.0,0.0),(0.0,8.0,0.0)])),
          TouchSensor(DEF='soundSensor',description='the sound sensor for engin 2')]),
        Transform(DEF='REAR_FUSELAGE',rotation=(0.0,0.0,1.0,-1.57),translation=(0.0,0.1,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.4,0.51,0.35),specularColor=(0.45,0.6,0.4))),
            geometry=Extrusion(ccw=False,creaseAngle=1.57,crossSection=[(0.0,-0.25),(0.25,-0.75),(0.75,-1.25),(1.5,-1.5),(2.0,-1.5),(2.5,-1.25),(2.75,-0.75),(2.75,0.75),(2.5,1.25),(2.0,1.5),(1.5,1.5),(0.75,1.25),(0.25,0.75),(0.0,0.25),(0.0,-0.25)],scale=[(0.1,0.5),(1.0,1.0)],spine=[(0.0,0.0,0.0),(0.0,5.0,0.0)]))]),
        Transform(DEF='CENTRAL_FUSELAGE',rotation=(0.0,0.0,1.0,-1.57),translation=(5.0,0.1,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.4,0.51,0.35),specularColor=(0.45,0.6,0.4)),
              texture=ImageTexture(url=["peinture.png","https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/peinture.png"])),
            geometry=Extrusion(ccw=False,creaseAngle=0.5,crossSection=[(0.0,-0.25),(0.25,-0.75),(0.75,-1.25),(1.5,-1.5),(2.0,-1.5),(2.5,-1.25),(2.75,-0.75),(2.75,0.75),(2.5,1.25),(2.0,1.5),(1.5,1.5),(0.75,1.25),(0.25,0.75),(0.0,0.25),(0.0,-0.25)],scale=[(1.0,1.0),(0.95,0.95),(0.95,0.95)],spine=[(0.0,0.0,0.0),(0.0,7.0,0.0),(0.0,7.1,0.0)]))]),
        Transform(DEF='CABINE',rotation=(0.0,0.0,1.0,-1.57),translation=(12.0,-2.03,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.4,0.51,0.35),specularColor=(0.45,0.6,0.4)),
              texture=ImageTexture(url=["cabine.png","https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/cabine.png"])),
            geometry=Extrusion(ccw=False,creaseAngle=0.5,crossSection=[(-2.25,-0.25),(-2.0,-0.75),(-1.5,-1.25),(-0.75,-1.5),(-0.25,-1.5),(0.25,-1.25),(0.5,-0.75),(0.5,0.75),(0.25,1.25),(-0.25,1.5),(-0.75,1.5),(-1.5,1.25),(-2.0,0.75),(-2.25,0.25),(-2.25,-0.25)],scale=[(0.95,0.95),(0.95,0.95),(0.9,0.9),(0.8,0.8),(0.6,0.62),(0.38,0.38)],spine=[(0.0,0.0,0.0),(0.0,0.5,0.0),(0.0,0.75,0.0),(0.0,1.0,0.0),(0.0,1.4,0.0),(0.0,1.8,0.0)]))]),
        Transform(DEF='NEZ',rotation=(0.0,0.0,1.0,-1.57),translation=(13.75,-2.03,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.0,0.0,0.0))),
            geometry=Extrusion(ccw=False,creaseAngle=1.57,crossSection=[(-2.25,-0.25),(-2.0,-0.75),(-1.5,-1.25),(-0.75,-1.5),(-0.25,-1.5),(0.25,-1.25),(0.5,-0.75),(0.5,0.75),(0.25,1.25),(-0.25,1.5),(-0.75,1.5),(-1.5,1.25),(-2.0,0.75),(-2.25,0.25),(-2.25,-0.25)],scale=[(0.38,0.38),(0.38,0.38),(0.33,0.33),(0.3,0.3),(0.27,0.27),(0.24,0.27),(0.15,0.15),(0.12,0.12)],spine=[(0.0,0.0,0.0),(0.0,0.05,0.0),(0.0,0.13,0.0),(0.0,0.2,0.0),(0.0,0.3,0.0),(0.0,0.4,0.0),(0.0,0.5,0.0),(0.0,0.6,0.0)])),
          Transform(scale=(1,1.3,1.15),translation=(-0.18,0.35,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.0,0.0,0.0),specularColor=(0.5,0.5,0.5))),
              geometry=Sphere(radius=0.34))])]),
        Transform(DEF='COMPLETE_ENGINE',translation=(8.0,-0.15,-5.6),
          children=[
          Group(DEF='ENGINE',
            children=[
            Transform(rotation=(-0.71,0.71,-0.0,3.14),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.36,0.48,0.3))),
                geometry=Extrusion(creaseAngle=0.5,crossSection=[(-0.35,0.08),(-0.3,0.2),(-0.2,0.3),(0.0,0.4),(0.4,0.4),(1.0,0.3),(1.1,0.1),(1.1,-0.1),(1.0,-0.3),(0.4,-0.4),(0.0,-0.4),(-0.2,-0.3),(-0.3,-0.2),(-0.35,-0.08),(-0.35,0.08)],scale=[(0.8,0.8),(0.9,0.9),(0.8,0.8),(0.5,0.7)],spine=[(0.0,0.0,0.0),(0.0,0.5,0.0),(0.0,1.0,0.0),(0.0,2.0,0.0)]))]),
            Transform(rotation=(0.0,0.0,1.0,1.57),scale=(1.2,1.0,1.0),translation=(-0.08,-0.6,0.0),
              children=[
              Shape(DEF='ENGINE_GATE',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.0,0.0,0.0))),
                geometry=Cylinder(height=0.2,radius=0.15,side=False))]),
            Transform(rotation=(0.0,0.0,1.0,1.57),scale=(1.2,1.0,1.0),translation=(-1.95,-0.25,0.0),
              children=[
              Shape(USE='ENGINE_GATE')])])]),
        Transform(translation=(8.0,-0.15,-2.8),
          children=[
          Group(USE='ENGINE'),
          Sound(maxBack=100,maxFront=100,minBack=5.0,minFront=5.0,
            source=AudioClip(DEF='soundClip',description='emits the rotor sound',pitch=1.5,url=["DRONE1.wav","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/DRONE1.wav"])),
          ROUTE(fromField='touchTime',fromNode='soundSensor',toField='set_startTime',toNode='soundClip')]),
        Transform(translation=(8.0,-0.15,2.8),
          children=[
          Group(USE='ENGINE')]),
        Transform(translation=(8.0,-0.15,5.6),
          children=[
          Group(USE='ENGINE')]),
        Transform(DEF='ROTOR1',translation=(8.1,-0.2,-2.8),
          children=[
          Group(DEF='ROTOR',
            children=[
            Transform(rotation=(0.0,0.0,1.0,-1.57),translation=(0.15,0.0,0.0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.05,0.05,0.05),emissiveColor=(0.5,0.5,0.5))),
                geometry=Cone(bottomRadius=0.20,height=0.3))]),
            Transform(rotation=(0.0,0.0,1.0,1.57),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.9,0.9,0.9))),
                geometry=Cylinder(height=0.1,radius=0.25)),
              Transform(translation=(0.0,0.20,0.0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(),),
                  geometry=Cylinder(height=0.4,radius=0.15))])]),
            Group(DEF='HELICE',
              children=[
              Transform(rotation=(0.0,1.0,0.0,1.57),translation=(0.0,0.2,0.1),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(1.0,0.0,0.0)),
                    texture=ImageTexture(url=["helice.png","https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/helice.png"])),
                  geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.19,0.0),(0.125,-0.0075),(0.075,-0.01),(0.025,-0.01),(0.0050,-0.0075),(0.0,-0.0025),(0.0,0.0025),(0.0050,0.0075),(0.025,0.01),(0.075,0.01),(0.125,0.0075),(0.19,0.0)],orientation=[(0.0,0.0,0.0,0.0),(0.0,1.0,0.0,0.1),(0.0,1.0,0.0,0.2)],scale=[(1.0,1.0),(1.0,1.0),(1.0,1.0)],spine=[(0.0,0.0,0.0),(0.0,0.5,0.0),(0.0,1.2,0.0)]))])]),
            Transform(rotation=(1,0,0,2.09),
              children=[
              Group(USE='HELICE')]),
            Transform(rotation=(-1,0,0,2.09),
              children=[
              Group(USE='HELICE')])])]),
        Transform(DEF='ROTOR2',rotation=(1.0,0.0,0.0,0.5),translation=(8.1,-0.2,-5.6),
          children=[
          Group(USE='ROTOR')]),
        Transform(DEF='ROTOR3',rotation=(1.0,0.0,0.0,1.3),translation=(8.1,-0.2,2.8),
          children=[
          Group(USE='ROTOR')]),
        Transform(DEF='ROTOR4',rotation=(1.0,0.0,0.0,0.8),translation=(8.1,-0.2,5.6),
          children=[
          Group(USE='ROTOR')]),
        Group(DEF='gears',
          children=[
          Transform(translation=(12,-2.5,0.0),
            children=[
            Transform(DEF='firstGearDoor',
              children=[
              Transform(
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.4,0.48,0.35))),
                  geometry=Box(size=(1,0.05,0.7)))])]),
            Transform(DEF='firstGear',
              children=[
              Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.5,0.0),
                children=[
                Transform(scale=(0.1,0.15,0.1),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.0,0.0,0.0))),
                    geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)],spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)]))]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(),),
                    geometry=Cylinder(height=0.25,radius=0.15))])]),
              Transform(translation=(0.0,0.8,0.2),
                children=[
                Shape(DEF='gearAxe',
                  appearance=Appearance(
                    material=Material(),),
                  geometry=Box(size=(0.1,0.8,0.05)))]),
              Transform(translation=(0.0,0.8,-0.2),
                children=[
                Shape(USE='gearAxe')])]),
            TouchSensor(DEF='firstGearSensor',description='a sensor to extract the lending gears')]),
          Transform(DEF='rearGears',translation=(0,0.6,0.0),
            children=[
            Transform(DEF='RGL1',translation=(7.0,-3,1.3),
              children=[
              Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.5,0.0),
                children=[
                Transform(scale=(0.12,0.2,0.12),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.0,0.0,0.0))),
                    geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)],spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)]))]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(),),
                    geometry=Cylinder(height=0.25,radius=0.15))])]),
              Transform(translation=(0.0,0.8,-0.2),
                children=[
                Shape(DEF='rearGearAxe',
                  appearance=Appearance(
                    material=Material(),),
                  geometry=Cylinder(height=0.8,radius=0.1))])]),
            Transform(DEF='RGL2',translation=(7.0,-3,0.9),
              children=[
              Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.5,0.0),
                children=[
                Transform(scale=(0.12,0.2,0.12),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.0,0.0,0.0))),
                    geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)],spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)]))]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(),),
                    geometry=Cylinder(height=0.25,radius=0.15))])])]),
            Transform(DEF='RGL3',translation=(6.0,-3,1.3),
              children=[
              Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.5,0.0),
                children=[
                Transform(scale=(0.12,0.2,0.12),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.0,0.0,0.0))),
                    geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)],spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)]))]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(),),
                    geometry=Cylinder(height=0.25,radius=0.15))])]),
              Transform(translation=(0.0,0.8,-0.2),
                children=[
                Shape(USE='rearGearAxe')])]),
            Transform(DEF='RGL4',translation=(6.0,-3,0.9),
              children=[
              Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.5,0.0),
                children=[
                Transform(scale=(0.12,0.2,0.12),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.0,0.0,0.0))),
                    geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)],spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)]))]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(),),
                    geometry=Cylinder(height=0.25,radius=0.15))])])]),
            Transform(DEF='RGR1',translation=(7.0,-3,-1.3),
              children=[
              Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.5,0.0),
                children=[
                Transform(scale=(0.12,0.2,0.12),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.0,0.0,0.0))),
                    geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)],spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)]))]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(),),
                    geometry=Cylinder(height=0.25,radius=0.15))])]),
              Transform(translation=(0.0,0.8,0.2),
                children=[
                Shape(USE='rearGearAxe')])]),
            Transform(DEF='RGR2',translation=(7.0,-3,-0.9),
              children=[
              Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.5,0.0),
                children=[
                Transform(scale=(0.12,0.2,0.12),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.0,0.0,0.0))),
                    geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)],spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)]))]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(),),
                    geometry=Cylinder(height=0.25,radius=0.15))])])]),
            Transform(DEF='RGR3',translation=(6.0,-3,-0.9),
              children=[
              Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.5,0.0),
                children=[
                Transform(scale=(0.12,0.2,0.12),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.0,0.0,0.0))),
                    geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)],spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)]))]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(),),
                    geometry=Cylinder(height=0.25,radius=0.15))])]),
              Transform(translation=(0.0,0.8,-0.2),
                children=[
                Shape(USE='rearGearAxe')])]),
            Transform(DEF='RGR4',translation=(6.0,-3,-1.3),
              children=[
              Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.5,0.0),
                children=[
                Transform(scale=(0.12,0.2,0.12),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(diffuseColor=(0.0,0.0,0.0))),
                    geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)],spine=[(2.0,0.0,0.0),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.0,0.0,2.0),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.0,0.0,0.0),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.0,0.0,-2.0),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.0,0.0,0.0)]))]),
                Transform(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(),),
                    geometry=Cylinder(height=0.25,radius=0.15))])])])]),
          Transform(DEF='frontLight',center=(12.7,-2.6,0),
            children=[
            Transform(translation=(12.7,-2.4,0.0),
              children=[
              Transform(DEF='frontLightPlatform',
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.4,0.51,0.35))),
                  geometry=Box(size=(0.5,0.04,0.2)))]),
              Transform(DEF='frontBulb',scale=(1.0,0.4,1.0),translation=(-0.15,-0.03,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.8,0.8,0.1))),
                  geometry=Sphere(radius=0.09))])])]),
          SpotLight(DEF='lightSource',location=(12.7,-2.6,0),radius=50),
          TimeSensor(DEF='gearClock',cycleInterval=10),
          PositionInterpolator(DEF='firstDoorPath',key=[0.0,1.0],keyValue=[(0.0,0.0,0.0),(-1,0,0)]),
          PositionInterpolator(DEF='firstGearPath',key=[0.5,1.0],keyValue=[(0.0,0.0,0.0),(0.0,-0.9,0.0)]),
          PositionInterpolator(DEF='rearGearsPath',key=[0.0,1.0],keyValue=[(0.0,0.6,0.0),(0.0,-0.6,0.0)]),
          OrientationInterpolator(DEF='frontLightPath',key=[0.0,1.0],keyValue=[(0.0,0.0,0.0,0.0),(0.0,0.0,1.0,1.57)]),
          ROUTE(fromField='touchTime',fromNode='firstGearSensor',toField='set_startTime',toNode='gearClock'),
          ROUTE(fromField='fraction_changed',fromNode='gearClock',toField='set_fraction',toNode='firstDoorPath'),
          ROUTE(fromField='fraction_changed',fromNode='gearClock',toField='set_fraction',toNode='firstGearPath'),
          ROUTE(fromField='fraction_changed',fromNode='gearClock',toField='set_fraction',toNode='rearGearsPath'),
          ROUTE(fromField='value_changed',fromNode='firstDoorPath',toField='set_translation',toNode='firstGearDoor'),
          ROUTE(fromField='value_changed',fromNode='firstGearPath',toField='set_translation',toNode='firstGear'),
          ROUTE(fromField='value_changed',fromNode='rearGearsPath',toField='set_translation',toNode='rearGears'),
          ROUTE(fromField='fraction_changed',fromNode='gearClock',toField='set_fraction',toNode='frontLightPath'),
          ROUTE(fromField='value_changed',fromNode='frontLightPath',toField='set_rotation',toNode='frontLight')]),
        Group(DEF='rightRearGear',
          children=[
          Transform(rotation=(-0.58,-0.58,-0.58,2.09),translation=(4.9,-2.2,1.12),
            children=[
            Shape(DEF='rearGearBloc',
              appearance=Appearance(
                material=Material(diffuseColor=(0.39,0.50,0.34))),
              geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.00,0.80),(0.25,0.77),(0.45,0.69),(0.57,0.55),(0.69,0.17),(0.71,0.00),(0.69,-0.10),(0.60,-0.28),(0.43,-0.37),(-0.4,-0.42),(-0.15,0.25),(0.00,0.80)],scale=[(0.1,0.1),(0.8,0.8),(1.0,1.0),(1.0,1.0),(0.8,0.8),(0.1,0.1)],spine=[(0.0,0.0,0.0),(0.0,0.4,0.0),(0.0,0.7,0.0),(0.0,3.8,0.0),(0.0,4.1,0.0),(0.0,4.5,0.0)]))])]),
        Group(DEF='leftRearGear',
          children=[
          Transform(rotation=(-0.58,0.58,0.58,2.09),translation=(9.3,-2.2,-1.12),
            children=[
            Shape(USE='rearGearBloc')])]),
        TimeSensor(DEF='HELICE_CLOCK',cycleInterval=0.5,loop=True),
        OrientationInterpolator(DEF='HELICE_ROT',key=[0.0,0.5,1.0],keyValue=[(1.0,0.0,0.0,0.00),(1.0,0.0,0.0,3.14),(1.0,0.0,0.0,6.28)]),
        ROUTE(fromField='fraction_changed',fromNode='HELICE_CLOCK',toField='set_fraction',toNode='HELICE_ROT'),
        ROUTE(fromField='value_changed',fromNode='HELICE_ROT',toField='set_rotation',toNode='ROTOR1'),
        ROUTE(fromField='value_changed',fromNode='HELICE_ROT',toField='set_rotation',toNode='ROTOR2'),
        ROUTE(fromField='value_changed',fromNode='HELICE_ROT',toField='set_rotation',toNode='ROTOR3'),
        ROUTE(fromField='value_changed',fromNode='HELICE_ROT',toField='set_rotation',toNode='ROTOR4')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for C130Hercules.py")
