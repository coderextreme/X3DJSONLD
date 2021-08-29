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
    meta(content='Type209GlafkosDieselSubmarine.x3d',name='title'),
    meta(content='A Hellenic fleet submarine.',name='description'),
    meta(content='Anthony Varelas',name='creator'),
    meta(content='1 eptember 2002',name='created'),
    meta(content='27 March 2016',name='modified'),
    meta(content='ArleighBurkePropeller.wrl Mk48.Torpedo.wrl HarpoonPrototype.wrl Radar3.wrl sonar.wav MISSILE.wav',name='reference'),
    meta(content='need to scale to real-world size.',name='warning'),
    meta(content='Torpedoes and missiles need to get moved to submarine-independent coordinate system.',name='warning'),
    meta(content='Inline Harpoon needs to get converted to Harpoon ExternProtoDeclare',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Submarines/Various/Type209GlafkosDieselSubmarine.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.5],groundColor=[(0,0.2,0.7),(0,0.6,0.9)],skyAngle=[0.654,1.309],skyColor=[(1,1,1),(0,0.5,1),(0,0.5,1)]),
    Viewpoint(description='Type 209 Glafkos Diesel Submarine',fieldOfView=1.047,position=(1.5,-1.035,15.5)),
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
            Inline(USE='Harpoon')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Type209GlafkosDieselSubmarine.py")
