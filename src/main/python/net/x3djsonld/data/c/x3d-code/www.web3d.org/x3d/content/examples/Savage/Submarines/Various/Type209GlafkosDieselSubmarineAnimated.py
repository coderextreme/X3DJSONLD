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
    meta(content='Type209GlafkosDieselSubmarineAnimated.x3d',name='title'),
    meta(content='A Hellenic fleet submarine with animation capabilities.',name='description'),
    meta(content='Anthony Varelas',name='creator'),
    meta(content='1 August 2002',name='created'),
    meta(content='27 March 2016',name='modified'),
    meta(content='ArleighBurkePropeller.wrl Mk48.Torpedo.wrl HarpoonPrototype.wrl Radar3.wrl sonar.wav MISSILE.wav',name='reference'),
    meta(content='Torpedoes and missiles need to get moved to submarine-independent coordinate system.',name='warning'),
    meta(content='Inline Harpoon needs to get converted to Harpoon ExternPrototDeclare',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Submarines/Various/Type209GlafkosDieselSubmarineAnimated.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.5708],groundColor=[(0,0.2,0.7),(0,0.6,0.9)],skyAngle=[0.654,1.309],skyColor=[(1,1,1),(0,0.5,1),(0,0.5,1)]),
    Viewpoint(description='Far Right View',fieldOfView=1.047,position=(1.5,-1.035,15.5)),
    Viewpoint(description='Close Right View',position=(0,-1.035,10)),
    Viewpoint(description='Tower View',position=(2.7,1.1,3)),
    Viewpoint(description='Rear View',orientation=(0,1,0,-1.57),position=(-10,-0.83,0)),
    Viewpoint(description='Left View',fieldOfView=1.047,orientation=(0,1,0,3.14),position=(1.5,-1.035,-23.6)),
    Viewpoint(description='Front View',orientation=(0,1,0,1.57),position=(11,-1.035,0)),
    Viewpoint(description='Top View',fieldOfView=1.047,orientation=(1,0,0,-1.57),position=(0,25,-3.9)),
    Viewpoint(description='Bottom View',fieldOfView=1.047,orientation=(1,0,0,1.57),position=(0,-27,-4)),
    Viewpoint(description='Right Side Launch View',fieldOfView=1.047,position=(9,-1.035,15.5)),
    Transform(scale=(0.8,0.8,0.8),translation=(1.5,-0.846,0),
      children=[
      Group(
        children=[
        Transform(DEF='Submarine',center=(0,0,-5),
          #  Construction of the Hull 
          children=[
          Transform(DEF='Hull',center=(0,0.42,0),scale=(1,1.3,1),
            children=[
            Transform(rotation=(0,0,1,1.57),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,0),emissiveColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=12.375,radius=0.84))]),
            Transform(rotation=(0,0,1,1.57),translation=(-6.184,0,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                geometry=Extrusion(beginCap=False,creaseAngle=1.57,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],scale=[(0.84,0.84),(0.81,0.81),(0.77,0.77),(0.74,0.74),(0.70,0.70),(0.66,0.66),(0.62,0.62),(0.57,0.57),(0.52,0.52),(0.47,0.47),(0.41,0.41),(0.33,0.33),(0.24,0.24),(0.15,0.15),(0.06,0.06)],spine=[(0,0,0),(0,0.3,0),(0,0.6,0),(0,0.9,0),(0,1.2,0),(0,1.5,0),(0,1.8,0),(0,2.1,0),(0,2.4,0),(0,2.7,0),(0,3,0),(0,3.3,0),(0,3.6,0),(0,3.9,0),(0,4.2,0)]))]),
            Transform(scale=(0.6,1,1),translation=(6.1875,0,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                geometry=Sphere(radius=0.825))]),
            Transform(scale=(7.63,0.53,0.5),translation=(-0.04,0.61,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                geometry=Extrusion(creaseAngle=1.57,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,-0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],scale=[(0.815,0.94),(0.815,0.92),(0.815,0.90),(0.815,0.88),(0.815,0.86),(0.815,0.84),(0.815,0.82),(0.8,0.8),(0.78,0.78),(0.76,0.76)],spine=[(0,0.15,0),(0,0.2,0),(0,0.25,0),(0,0.3,0),(0,0.35,0),(0,0.4,0),(0,0.45,0),(0,0.5,0),(0,0.55,0),(0,0.6,0)]))])]),
          #  Construction of the Tower 
          Transform(DEF='Tower',
            children=[
            Transform(DEF='TowerBody',scale=(5.357,1,1),translation=(0.84375,1.455,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=1.5,radius=0.28))]),
            #  Construction of the Hatch 
            Transform(DEF='Hatch',
              children=[
              Transform(DEF='HatchBase',translation=(1.34,2.244,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.15,0.175,0.175))),
                  geometry=Cylinder(height=0.08,radius=0.17))]),
              Transform(
                children=[
                Group(DEF='HatchCover',
                  children=[
                  Transform(translation=(1.33,2.2965,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.15,0.175,0.175))),
                      geometry=Cylinder(height=0.0216,radius=0.189))]),
                  Transform(translation=(1.438,2.2985,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.15,0.175,0.175))),
                      geometry=Box(size=(0.216,0.0216,0.378)))]),
                  Transform(rotation=(1,0,0,1.57),translation=(1.5415,2.2904,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.15,0.175,0.175))),
                      geometry=Cylinder(height=0.378,radius=0.027))])])])]),
            Transform(DEF='Radar',
              children=[
              Transform(translation=(0.84375,3.001875,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                  geometry=Cylinder(height=1.59375,radius=0.0385))]),
              Transform(scale=(0.1,0.1,0.1),translation=(0.84375,3.9,0),
                children=[
                Inline(url=["SubmarineRadar.x3d","https://savage.nps.edu/Savage/Submarines/Various/SubmarineRadar.x3d","SubmarineRadar.wrl","https://savage.nps.edu/Savage/Submarines/Various/SubmarineRadar.wrl"])])]),
            #  Construction of Snorkelling device 
            Transform(DEF='Snorkelling',translation=(0.4,2.908125,0),
              children=[
              Transform(DEF='SnorkellingTube',
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                  geometry=Cylinder(height=1.40625,radius=0.09))]),
              Transform(DEF='SnorkellingCover',scale=(0.49,0.65,0.49),translation=(-0.66,-0.79,0),
                children=[
                Group(USE='HatchCover')])]),
            #  Construction of Periscope #1 
            Transform(DEF='Periscope1',
              children=[
              Transform(translation=(2,2.7675,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                  geometry=Cylinder(height=1.125,radius=0.025))]),
              Transform(translation=(2,3.25,0),
                children=[
                Shape(DEF='PeriscopeTop',
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                  geometry=Cylinder(height=0.1,radius=0.04))]),
              Transform(rotation=(1,0,0,1.57),translation=(2,3.25,0),
                children=[
                Shape(DEF='PeriscopeLens',
                  appearance=Appearance(
                    material=Material(),),
                  geometry=Cylinder(height=0.08,radius=0.028))])]),
            #  Construction of Periscope #2 
            Transform(DEF='Periscope2',
              children=[
              Transform(translation=(1.7,3.001875,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                  geometry=Cylinder(height=1.59375,radius=0.025))]),
              Transform(translation=(1.7,3.72,0),
                children=[
                Shape(USE='PeriscopeTop')]),
              Transform(rotation=(1,0,0,1.57),translation=(1.7,3.72,0),
                children=[
                Shape(USE='PeriscopeLens')])]),
            Transform(
              children=[
              Transform(translation=(1.0175,2.865,0.15),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                  geometry=Cylinder(height=1.32,radius=0.025))]),
              Transform(translation=(1.0175,3.55,0.15),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                  geometry=Cylinder(height=0.1,radius=0.016))])]),
            Transform(
              children=[
              Transform(translation=(0.67,2.865,0.15),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                  geometry=Cylinder(height=1.32,radius=0.025))]),
              Transform(translation=(0.67,3.55,0.15),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                  geometry=Cylinder(height=0.1,radius=0.016))])])]),
          #  Construction of the Rudders 
          Transform(DEF='Rudders',
            children=[
            Transform(rotation=(1,0,0,1.57),scale=(0.7,1,0.1),translation=(-9.5,0,0.57),
              children=[
              Shape(DEF='RightRudder',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=0.8,radius=0.4))]),
            Transform(translation=(-9.9,0,0.545),
              children=[
              Shape(DEF='RightRudderBlade',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                geometry=Box(size=(0.235,0.05,0.85)))]),
            Transform(rotation=(1,0,0,-1.57),scale=(0.7,1,0.1),translation=(-9.5,0,-0.57),
              children=[
              Shape(USE='RightRudder')]),
            Transform(translation=(-9.9,0,-0.545),
              children=[
              Shape(USE='RightRudderBlade')]),
            Transform(scale=(1,1,0.133),translation=(-9.72,0.5,0),
              children=[
              Shape(DEF='UpperRudder',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=0.8,radius=0.3))]),
            Transform(scale=(1,1,0.114),translation=(-9.67,-0.5,0),
              children=[
              Shape(DEF='DownRudder',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=0.6,radius=0.35))])]),
          #  Construction of the Stabilizers 
          Transform(DEF='Stabilizers',
            children=[
            Transform(scale=(1,1,2),translation=(5.2,-0.42,0.42),
              children=[
              Shape(DEF='RightStabilizer',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=0.05,radius=0.46875))]),
            Transform(scale=(1,1,2),translation=(5.2,-0.42,-0.42),
              children=[
              Shape(DEF='LeftStabilizer',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.175,0.175),specularColor=(0.2,0.2,0.2))),
                geometry=Cylinder(height=0.05,radius=0.46875))])]),
          #  Inline the Propeller 
          Transform(DEF='Propeller',rotation=(0,1,0,-1.57),scale=(0.2,0.2,0.2),translation=(-10.5,-0.12,0),
            children=[
            Inline(url=["Type209GlafkosDieselSubmarinePropeller.x3d","https://savage.nps.edu/Savage/Submarines/Various/Type209GlafkosDieselSubmarinePropeller.x3d","Type209GlafkosDieselSubmarinePropeller.wrl","https://savage.nps.edu/Savage/Submarines/Various/Type209GlafkosDieselSubmarinePropeller.wrl"])]),
          #  Weapons 
          Transform(DEF='Torpedoes-Harpoons',
            children=[
            Transform(DEF='TorpedoSet1',rotation=(0,0,1,-1.57),translation=(5.522,-0.2,-0.3),
              children=[
              Shape(DEF='TorpedoTube1',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.18,0.15,0.15))),
                geometry=Cylinder(height=2.282,radius=0.09)),
              Transform(DEF='Torpedo1',
                children=[
                Transform(rotation=(0,0,1,1.57),scale=(0.32,0.32,0.32),translation=(0,0.18,0),
                  children=[
                  Inline(DEF='Mk48Torpedo',url=["../../Weapons/Torpedoes/Mk48Torpedo.x3d","https://savage.nps.edu/Savage/Weapons/Torpedoes/Mk48Torpedo.x3d","../../Weapons/Torpedoes/Mk48Torpedo.wrl","https://savage.nps.edu/Savage/Weapons/Torpedoes/Mk48Torpedo.wrl"]),
                  Transform(rotation=(0,0,1,1.57),translation=(-1.872,0,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(0.18,0.18,0.18))),
                      geometry=Cylinder(height=1.3,radius=0.267))])])])]),
            Transform(DEF='TorpedoSet2',rotation=(0,0,1,-1.57),translation=(5.522,-0.2,0.3),
              children=[
              Shape(DEF='TorpedoTube2',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.18,0.15,0.15))),
                geometry=Cylinder(height=2.282,radius=0.09)),
              Transform(DEF='Torpedo2',
                children=[
                Transform(rotation=(0,0,1,1.57),scale=(0.32,0.32,0.32),translation=(0,0.18,0),
                  children=[
                  Inline(USE='Mk48Torpedo'),
                  Transform(rotation=(0,0,1,1.57),translation=(-1.872,0,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(0.18,0.18,0.18))),
                      geometry=Cylinder(height=1.3,radius=0.267))])])])]),
            Transform(DEF='TorpedoSet3',rotation=(0,0,1,-1.57),translation=(5.496,-0.4,-0.35),
              children=[
              Shape(DEF='TorpedoTube3',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.18,0.15,0.15))),
                geometry=Cylinder(height=2.282,radius=0.09)),
              Transform(DEF='Torpedo3',
                children=[
                Transform(rotation=(0,0,1,1.57),scale=(0.32,0.32,0.32),translation=(0,0.18,0),
                  children=[
                  Inline(USE='Mk48Torpedo'),
                  Transform(rotation=(0,0,1,1.57),translation=(-1.872,0,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(0.18,0.18,0.18))),
                      geometry=Cylinder(height=1.3,radius=0.267))])])])]),
            Transform(DEF='TorpedoSet4',rotation=(0,0,1,-1.57),translation=(5.496,-0.4,0.35),
              children=[
              Shape(DEF='TorpedoTube4',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.18,0.15,0.15))),
                geometry=Cylinder(height=2.282,radius=0.09)),
              Transform(DEF='Torpedo4',
                children=[
                Transform(rotation=(0,0,1,1.57),scale=(0.32,0.32,0.32),translation=(0,0.18,0),
                  children=[
                  Inline(USE='Mk48Torpedo'),
                  Transform(rotation=(0,0,1,1.57),translation=(-1.872,0,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(0.18,0.18,0.18))),
                      geometry=Cylinder(height=1.3,radius=0.267))])])])]),
            Transform(DEF='TorpedoSet5',rotation=(0,0,1,-1.57),translation=(5.528,-0.4,-0.126),
              children=[
              Shape(DEF='TorpedoTube5',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.18,0.15,0.15))),
                geometry=Cylinder(height=2.282,radius=0.09)),
              Transform(DEF='Torpedo5',
                children=[
                Transform(rotation=(0,0,1,1.57),scale=(0.32,0.32,0.32),translation=(0,0.18,0),
                  children=[
                  Inline(USE='Mk48Torpedo'),
                  Transform(rotation=(0,0,1,1.57),translation=(-1.872,0,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(0.18,0.18,0.18))),
                      geometry=Cylinder(height=1.3,radius=0.267))])])])]),
            Transform(DEF='TorpedoSet6',rotation=(0,0,1,-1.57),translation=(5.528,-0.4,0.126),
              children=[
              Shape(DEF='TorpedoTube6',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.18,0.15,0.15))),
                geometry=Cylinder(height=2.282,radius=0.09)),
              Transform(DEF='Torpedo6',
                children=[
                Transform(rotation=(0,0,1,1.57),scale=(0.32,0.32,0.32),translation=(0,0.18,0),
                  children=[
                  Inline(USE='Mk48Torpedo'),
                  Transform(rotation=(0,0,1,1.57),translation=(-1.872,0,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(0.18,0.18,0.18))),
                      geometry=Cylinder(height=1.3,radius=0.267))])])])]),
            Transform(DEF='HarpoonSet1',rotation=(0,0,1,-1.57),translation=(5.528,0,-0.25),
              children=[
              Shape(DEF='HarpoonTube1',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.18,0.15,0.15))),
                geometry=Cylinder(height=2.282,radius=0.09)),
              Transform(DEF='Harpoon1',scale=(0.1,0.1,0.1),translation=(0,1.08,0),
                children=[
                Inline(DEF='Harpoon',url=["../../Weapons/Missiles/HarpoonExample.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/HarpoonExample.x3d","../../Weapons/Missiles/HarpoonExample.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/HarpoonExample.wrl"])])]),
            Transform(DEF='HarpoonSet2',rotation=(0,0,1,-1.57),translation=(5.528,0,0.25),
              children=[
              Shape(DEF='HarpoonTube2',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.18,0.15,0.15))),
                geometry=Cylinder(height=2.282,radius=0.09)),
              Transform(DEF='Harpoon2',scale=(0.1,0.1,0.1),translation=(0,1.08,0),
                children=[
                Inline(USE='Harpoon')])])])]),
        #  Main Sensors 
        PlaneSensor(DEF='SubDrag',description='click and drag to move object'),
        TouchSensor(DEF='Touch1',description='touch to activate'),
        TimeSensor(DEF='Clock',cycleInterval=50,loop=True),
        #  Itinerary of the submarine 
        Script(DEF='SubMove',
          field=[
          field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
          field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
          field(accessType='initializeOnly',name='radius',type='SFFloat',value=10),
          field(accessType='initializeOnly',name='turns',type='SFFloat',value=1)]),
        Script(DEF='SubTurn',
          field=[
          field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
          field(accessType='outputOnly',name='value_changed',type='SFRotation'),
          field(accessType='initializeOnly',name='radius',type='SFFloat',value=1),
          field(accessType='initializeOnly',name='turns',type='SFFloat',value=1)]),
        Fog(color=(0,0,1),fogType='EXPONENTIAL',visibilityRange=150000),
        #  Sonar Sound 
        Sound(intensity=0.6,maxBack=100,maxFront=100,minBack=50,minFront=50,
          source=AudioClip(DEF='SonarSound',description='Sonar sound',loop=True,url=[".../.../Submarines/Various/sonar.wav","https://savage.nps.edu/Savage/Submarines/Various/sonar.wav","sonar.wav"])),
        #  Launch Torpedoes-Missiles 
        Group(
          children=[
          Transform(translation=(1.5,-5.2,7),
            children=[
            Shape(
              appearance=Appearance(DEF='TorpedoButton',
                material=Material(diffuseColor=(0.25,0,0.75))),
              geometry=Sphere(radius=0.2)),
            TouchSensor(DEF='TorpedoLaunch1',description='touch to activate')]),
          Transform(translation=(2.5,-5.2,7),
            children=[
            Shape(
              appearance=Appearance(USE='TorpedoButton'),
              geometry=Sphere(radius=0.2)),
            TouchSensor(DEF='TorpedoLaunch2',description='touch to activate')]),
          Transform(translation=(3.5,-5.2,7),
            children=[
            Shape(
              appearance=Appearance(USE='TorpedoButton'),
              geometry=Sphere(radius=0.2)),
            TouchSensor(DEF='TorpedoLaunch3',description='touch to activate')]),
          Transform(translation=(4.5,-5.2,7),
            children=[
            Shape(
              appearance=Appearance(USE='TorpedoButton'),
              geometry=Sphere(radius=0.2)),
            TouchSensor(DEF='TorpedoLaunch4',description='touch to activate')]),
          Transform(translation=(5.5,-5.2,7),
            children=[
            Shape(
              appearance=Appearance(USE='TorpedoButton'),
              geometry=Sphere(radius=0.2)),
            TouchSensor(DEF='TorpedoLaunch5',description='touch to activate')]),
          Transform(translation=(6.5,-5.2,7),
            children=[
            Shape(
              appearance=Appearance(USE='TorpedoButton'),
              geometry=Sphere(radius=0.2)),
            TouchSensor(DEF='TorpedoLaunch6',description='touch to activate')]),
          Transform(translation=(7.5,-5.2,7),
            children=[
            Shape(
              appearance=Appearance(DEF='HarpoonButton',
                material=Material(diffuseColor=(0.9,0.9,0.9))),
              geometry=Sphere(radius=0.2)),
            TouchSensor(DEF='HarpoonLaunch1',description='touch to activate'),
            Sound(intensity=0.7,maxBack=100,maxFront=100,minBack=50,minFront=50,
              source=AudioClip(DEF='MissileSound1',description='Missile sound',url=["../../Weapons/Missiles/MISSILE1.wav","https://savage.nps.edu/Savage/Weapons/Missiles/MISSILE1.wav","MISSILE1.wav"]))]),
          Transform(translation=(8.5,-5.2,7),
            children=[
            Shape(
              appearance=Appearance(USE='HarpoonButton'),
              geometry=Sphere(radius=0.2)),
            TouchSensor(DEF='HarpoonLaunch2',description='touch to activate')]),
          #  TimeSensors for Torpedoes-Missiles 
          TimeSensor(DEF='Clock1',cycleInterval=12,enabled=False,loop=True),
          TimeSensor(DEF='Clock2',cycleInterval=12,enabled=False,loop=True),
          TimeSensor(DEF='Clock3',cycleInterval=12,enabled=False,loop=True),
          TimeSensor(DEF='Clock4',cycleInterval=12,enabled=False,loop=True),
          TimeSensor(DEF='Clock5',cycleInterval=12,enabled=False,loop=True),
          TimeSensor(DEF='Clock6',cycleInterval=12,enabled=False,loop=True),
          TimeSensor(DEF='Clock7',cycleInterval=8,enabled=False,loop=True),
          TimeSensor(DEF='Clock8',cycleInterval=8,enabled=False,loop=True),
          #  PositionInterpolators for Torpedoes 
          PositionInterpolator(DEF='TorpedoFire1',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,0),(0,4,0),(0,8,0),(0,12,0),(0,16,0),(0,20,0),(0,24,0),(0,28,0),(0,32,0),(0,36,0),(0,40,0)]),
          PositionInterpolator(DEF='TorpedoFire2',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,0),(0,4,0),(0,8,0),(0,12,0),(0,16,0),(0,20,0),(0,24,0),(0,28,0),(0,32,0),(0,36,0),(0,40,0)]),
          PositionInterpolator(DEF='TorpedoFire3',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,0),(0,4,0),(0,8,0),(0,12,0),(0,16,0),(0,20,0),(0,24,0),(0,28,0),(0,32,0),(0,36,0),(0,40,0)]),
          PositionInterpolator(DEF='TorpedoFire4',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,0),(0,4,0),(0,8,0),(0,12,0),(0,16,0),(0,20,0),(0,24,0),(0,28,0),(0,32,0),(0,36,0),(0,40,0)]),
          PositionInterpolator(DEF='TorpedoFire5',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,0),(0,4,0),(0,8,0),(0,12,0),(0,16,0),(0,20,0),(0,24,0),(0,28,0),(0,32,0),(0,36,0),(0,40,0)]),
          PositionInterpolator(DEF='TorpedoFire6',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,0),(0,4,0),(0,8,0),(0,12,0),(0,16,0),(0,20,0),(0,24,0),(0,28,0),(0,32,0),(0,36,0),(0,40,0)]),
          #  PositionInterpolators for Missiles 
          PositionInterpolator(DEF='HarpoonFire1',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,0),(0,4,0),(0,8,0),(0,12,0),(-1,16,0),(-3,20,0),(-6,24,0),(-10,28,0),(-15,32,0),(-21,36,0),(-28,40,0)]),
          PositionInterpolator(DEF='HarpoonFire2',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,0),(0,4,0),(0,8,0),(0,12,0),(-1,16,0),(-3,20,0),(-6,24,0),(-10,28,0),(-15,32,0),(-21,36,0),(-28,40,0)]),
          #  OrientationInterpolators for Missiles 
          OrientationInterpolator(DEF='HarpoonRot1',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0.112),(0,0,1,0.224),(0,0,1,0.449),(0,0,1,0.673),(0,0,1,0.897),(0,0,1,1.121),(0,0,1,1.346),(0,0,1,1.57)]),
          OrientationInterpolator(DEF='HarpoonRot2',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0.112),(0,0,1,0.224),(0,0,1,0.449),(0,0,1,0.673),(0,0,1,0.897),(0,0,1,1.121),(0,0,1,1.346),(0,0,1,1.57)])]),
        #  Missile Sound 
        ROUTE(fromField='touchTime',fromNode='HarpoonLaunch1',toField='set_startTime',toNode='MissileSound1'),
        ROUTE(fromField='touchTime',fromNode='HarpoonLaunch2',toField='set_startTime',toNode='MissileSound1'),
        #  Launch Torpedo #1 
        ROUTE(fromField='isOver',fromNode='TorpedoLaunch1',toField='set_enabled',toNode='Clock1'),
        ROUTE(fromField='fraction_changed',fromNode='Clock1',toField='set_fraction',toNode='TorpedoFire1'),
        ROUTE(fromField='value_changed',fromNode='TorpedoFire1',toField='set_translation',toNode='Torpedo1'),
        #  Launch Torpedo #2 
        ROUTE(fromField='isOver',fromNode='TorpedoLaunch2',toField='set_enabled',toNode='Clock2'),
        ROUTE(fromField='fraction_changed',fromNode='Clock2',toField='set_fraction',toNode='TorpedoFire2'),
        ROUTE(fromField='value_changed',fromNode='TorpedoFire2',toField='set_translation',toNode='Torpedo2'),
        #  Launch Torpedo #3 
        ROUTE(fromField='isOver',fromNode='TorpedoLaunch3',toField='set_enabled',toNode='Clock3'),
        ROUTE(fromField='fraction_changed',fromNode='Clock3',toField='set_fraction',toNode='TorpedoFire3'),
        ROUTE(fromField='value_changed',fromNode='TorpedoFire3',toField='set_translation',toNode='Torpedo3'),
        #  Launch Torpedo #4 
        ROUTE(fromField='isOver',fromNode='TorpedoLaunch4',toField='set_enabled',toNode='Clock4'),
        ROUTE(fromField='fraction_changed',fromNode='Clock4',toField='set_fraction',toNode='TorpedoFire4'),
        ROUTE(fromField='value_changed',fromNode='TorpedoFire4',toField='set_translation',toNode='Torpedo4'),
        #  Launch Torpedo #5 
        ROUTE(fromField='isOver',fromNode='TorpedoLaunch5',toField='set_enabled',toNode='Clock5'),
        ROUTE(fromField='fraction_changed',fromNode='Clock5',toField='set_fraction',toNode='TorpedoFire5'),
        ROUTE(fromField='value_changed',fromNode='TorpedoFire5',toField='set_translation',toNode='Torpedo5'),
        #  Launch Torpedo #6 
        ROUTE(fromField='isOver',fromNode='TorpedoLaunch6',toField='set_enabled',toNode='Clock6'),
        ROUTE(fromField='fraction_changed',fromNode='Clock6',toField='set_fraction',toNode='TorpedoFire6'),
        ROUTE(fromField='value_changed',fromNode='TorpedoFire6',toField='set_translation',toNode='Torpedo6'),
        #  Launch Harpoon #1 
        ROUTE(fromField='isOver',fromNode='HarpoonLaunch1',toField='set_enabled',toNode='Clock7'),
        ROUTE(fromField='fraction_changed',fromNode='Clock7',toField='set_fraction',toNode='HarpoonFire1'),
        ROUTE(fromField='value_changed',fromNode='HarpoonFire1',toField='set_translation',toNode='Harpoon1'),
        ROUTE(fromField='fraction_changed',fromNode='Clock7',toField='set_fraction',toNode='HarpoonRot1'),
        ROUTE(fromField='value_changed',fromNode='HarpoonRot1',toField='set_rotation',toNode='Harpoon1'),
        #  Launch Harpoon #2 
        ROUTE(fromField='isOver',fromNode='HarpoonLaunch2',toField='set_enabled',toNode='Clock8'),
        ROUTE(fromField='fraction_changed',fromNode='Clock8',toField='set_fraction',toNode='HarpoonFire2'),
        ROUTE(fromField='value_changed',fromNode='HarpoonFire2',toField='set_translation',toNode='Harpoon2'),
        ROUTE(fromField='fraction_changed',fromNode='Clock8',toField='set_fraction',toNode='HarpoonRot2'),
        ROUTE(fromField='value_changed',fromNode='HarpoonRot2',toField='set_rotation',toNode='Harpoon2')]),
      #  Drag the Submarine 
      ROUTE(fromField='translation_changed',fromNode='SubDrag',toField='set_translation',toNode='Submarine'),
      #  Moving the Submarine using the main TouchSensor 
      ROUTE(fromField='touchTime',fromNode='Touch1',toField='set_startTime',toNode='Clock'),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='SubMove'),
      ROUTE(fromField='value_changed',fromNode='SubMove',toField='set_translation',toNode='Submarine'),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='SubTurn'),
      ROUTE(fromField='value_changed',fromNode='SubTurn',toField='set_rotation',toNode='Submarine')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Type209GlafkosDieselSubmarineAnimated.py")
