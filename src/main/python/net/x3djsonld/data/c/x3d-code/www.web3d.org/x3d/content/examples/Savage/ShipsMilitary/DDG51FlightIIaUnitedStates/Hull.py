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
    meta(content='Hull.x3d',name='title'),
    meta(content='DDG-51 Flight IIA Hull',name='description'),
    meta(content='LT Joe Sears, USN',name='creator'),
    meta(content='5 June 2012',name='modified'),
    meta(content='26 February 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/Hull.x3d',name='identifier'),
    meta(content='http://combatindex.com/store/3d',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/ddg-51.htm',name='drawing'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='nonkskid.jpg',name='Image'),
    meta(content='forwardvertrep.jpg',name='Image'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='HullBottom',
      children=[
      Transform(DEF='Hull',
        children=[
        Transform(DEF='BottomHull',
          children=[
          Shape(
            geometry=Extrusion(creaseAngle=3,crossSection=[(-9,0),(9,0),(8,-1.5),(7.5,-3.5),(7,-4.5),(6,-5.5),(5,-6.5),(4,-7.1),(2.5,-7.5),(0,-7.5),(-2.5,-7.5),(-4,-7.1),(-5,-6.5),(-6,-5.5),(-7,-4.5),(-7.5,-3.5),(-8,-1.5),(-9,0)],orientation=[(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(0,0,0,0),(1,0,0,-.8)],scale=[(.666,.0001),(.68,.5),(1,1),(1,1),(1,1),(.90,1),(.01,1.5)],solid=False,spine=[(0,0,-1),(0,0,-2),(0,0,-23),(0,0,-45),(0,0,-107),(0,0,-131),(0,0,-149)]),
            appearance=Appearance(
              material=Material(DEF='REDHULL',diffuseColor=(.2,0,0),emissiveColor=(.2,0,0))))])]),
      Transform(DEF='SonarDomeAssembly',rotation=(1,0,0,-.03),translation=(0,-8,-141),
        children=[
        Transform(DEF='SonarDome',scale=(1,.6,1),
          children=[
          Shape(DEF='SonarDomeFwd',
            appearance=Appearance(
              material=Material(USE='REDHULL')),
            geometry=Sphere(radius=3))]),
        Transform(translation=(0,0,16),
          children=[
          Shape(DEF='SonarDomeAftExtension',
            appearance=Appearance(
              material=Material(USE='REDHULL')),
            geometry=Extrusion(creaseAngle=3,crossSection=[(0,1.8),(1.55,1),(3.05,0),(1.55,-1.5),(0,-1.85),(-1.55,-1.5),(-3.05,0),(-1.55,1),(0,1.8)],scale=[(.1,.1),(1,1)],solid=False,spine=[(0,0,0),(0,0,-16)]))])]),
      Transform(DEF='Propellers',rotation=(1,0,0,.03),scale=(1.2,1.2,1.2),translation=(0,-7,-9),
        children=[
        Inline(url=["Propellers.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/Propellers.x3d","Propellers.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/Propellers.wrl"])]),
      Transform(DEF='ShaftSupport',
        children=[
        Transform(DEF='PortScrewCylinder',rotation=(1,0,0,1.571),translation=(-4.75,-7,-11.25),
          children=[
          Shape(DEF='ShaftStrutCylinder',
            appearance=Appearance(
              material=Material(USE='REDHULL')),
            geometry=Cylinder(radius=.5))]),
        Transform(DEF='STBDScrewCylinder',rotation=(1,0,0,1.571),translation=(4.75,-7,-11.25),
          children=[
          Shape(USE='ShaftStrutCylinder')]),
        Transform(DEF='PortScrewStrut',translation=(-4.75,0,-10.5),
          children=[
          Shape(DEF='ShaftStrut',
            appearance=Appearance(
              material=Material(USE='REDHULL')),
            geometry=Extrusion(creaseAngle=.85,crossSection=[(-.05,0),(-.05,-7),(.05,-7),(.05,0),(-.05,0)],scale=[(1,1),(1,1)],spine=[(0,0,0),(0,0,-1.5)]))]),
        Transform(DEF='PortScrewStrut2',rotation=(0,0,1,2.2),translation=(-4.75,-7,-10.5),
          children=[
          Shape(USE='ShaftStrut')]),
        Transform(DEF='STBDScrewStrut',translation=(4.75,0,-10.5),
          children=[
          Shape(USE='ShaftStrut')]),
        Transform(DEF='STBDScrewStrut2',rotation=(0,0,1,4.08),translation=(4.75,-7,-10.5),
          children=[
          Shape(USE='ShaftStrut')]),
        Transform(DEF='PortScrewSeal',rotation=(1,0,0,1.61),translation=(-4.8,-6.3,-29.5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='REDHULL')),
            geometry=Cylinder(height=17,radius=.5))]),
        Transform(DEF='STBScrewSeal',rotation=(1,0,0,1.61),translation=(4.8,-6.3,-29.5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='REDHULL')),
            geometry=Cylinder(height=17,radius=.5))])]),
      Transform(DEF='PortRudder',translation=(-4,-3,-2),
        children=[
        Shape(DEF='Rudder',
          appearance=Appearance(
            material=Material(USE='REDHULL')),
          geometry=Extrusion(creaseAngle=.85,crossSection=[(-.05,0),(-.05,-6),(.05,-6),(.05,0),(-.05,0)],scale=[(1,1),(1,1),(1,.0001)],spine=[(0,0,-1),(0,0,-4),(0,0,-6)]))]),
      Transform(DEF='STBDRudder',translation=(4,-3,-2),
        children=[
        Shape(USE='Rudder')])]),
    Group(DEF='HullMainDeck',
      children=[
      Transform(DEF='FREEBOARD',translation=(0,0,-45),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=3,crossSection=[(-9,0),(-9.5,3.5),(-10,6),(10,6),(9.5,3.5),(9,0),(-9,0)],orientation=[(0,0,0,0),(0,0,0,0),(0,0,0,0),(1,0,0,-.8)],scale=[(1,1),(1,1),(.90,1.23),(.01,2.15)],solid=False,spine=[(0,0,0),(0,0,-62),(0,0,-86),(0,0,-104)]),
          appearance=Appearance(
            material=Material(diffuseColor=(.6,.6,.6)))),
        Transform(translation=(0,6.02,0),
          children=[
          Shape(DEF='MainDeckAftNonSkid',
            geometry=Extrusion(crossSection=[(-10,0),(10,0),(10,-.01),(-10,-.01),(-10,0)],orientation=[(0,0,0,0),(0,0,0,0)],scale=[(1,1),(1,1)],spine=[(0,0,0),(0,0,-62)]),
            appearance=Appearance(
              texture=ImageTexture(DEF='NONSKID',url=["nonskid.jpg","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/nonskid.jpg"])))]),
        Transform(rotation=(1,0,0,.0579),translation=(0,2.44,-.1),
          children=[
          Shape(DEF='MainDeckFWDNonSkid',
            geometry=Extrusion(crossSection=[(-10,0),(10,0),(10,-.01),(-10,-.01),(-10,0)],orientation=[(0,0,0,0),(0,0,0,0),(1,0,0,-.8)],scale=[(1,1),(.90,1),(.01,1)],spine=[(0,0,-62),(0,0,-86),(0,0,-113.4)]),
            appearance=Appearance(
              texture=ImageTexture(USE='NONSKID'))),
          Transform(DEF='FWDVertRep',translation=(0,-.45,0),
            children=[
            Shape(
              geometry=IndexedFaceSet(coordIndex=[2,3,7,6],solid=False,texCoordIndex=[0,1,2,3],
                coord=Coordinate(point=[(-5.7,0,-84),(5.7,0,-84),(-5.7,0.5,-84),(5.7,0.5,-84),(-5.7,0,-94),(5.7,0,-94),(-5.7,0.5,-94),(5.7,0.5,-94)]),
                texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)])),
              appearance=Appearance(
                texture=ImageTexture(url=["forwardvertrep.jpg","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/forwardvertrep.jpg"])))])])])]),
    Group(DEF='HullFantail',
      children=[
      Transform(translation=(0,2.5,0),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=3,crossSection=[(-9.352,0),(9.352,0),(9,-2.5),(-9,-2.5),(-9.352,0)],scale=[(.666,.0001),(.68,1),(1,1),(1,1)],spine=[(0,0,0),(0,0,-1),(0,0,-23),(0,0,-45)]),
          appearance=Appearance(DEF='HazeGray',
            material=Material(specularColor=(.4,.4,.4))))]),
      Group(DEF='FlightDeckNet',
        children=[
        Group(DEF='ENTIRENET',
          children=[
          Transform(rotation=(1,0,0,1.571),translation=(0,2,.5),
            children=[
            Shape(DEF='NETTING',
              #  GRILLWORK EXAMPLE FROM VRML COURSE BOOK USED 
              appearance=Appearance(
                texture=ImageTexture(url=["grill.png","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18-TextureMapping/grill.png"]),
                textureTransform=TextureTransform(center=(0.5,0.5),scale=(32,8))),
              geometry=IndexedFaceSet(DEF='Screen',coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
                coord=Coordinate(point=[(-1,-.4,0.1),(1,-.4,0.1),(1,.4,0.1),(-1,.4,0.1)]),
                texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)]))),
            Transform(translation=(-1,0,0),
              children=[
              Shape(DEF='POST',
                appearance=Appearance(DEF='NETGREY',
                  material=Material(diffuseColor=(.7,.7,.7),shininess=.3)),
                geometry=Cylinder(DEF='SIDEPOST',height=1,radius=.1))]),
            Transform(translation=(1,0,0),
              children=[
              Shape(USE='POST')]),
            Transform(rotation=(0,0,1,1.57),scale=(1,2,1),translation=(0,.4,0),
              children=[
              Shape(USE='POST')]),
            Transform(rotation=(0,0,1,1.57),scale=(1,2,1),translation=(0,-.4,0),
              children=[
              Shape(USE='POST')])])]),
        Group(DEF='FDNETSTBD',
          children=[
          Transform(rotation=(0,1,0,1.425),translation=(6.4,0,-1),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.425),translation=(6.7,0,-3),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.425),translation=(7,0,-5),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.425),translation=(7.3,0,-7),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.425),translation=(7.6,0,-9),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.425),translation=(7.9,0,-11),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.425),translation=(8.2,0,-13),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.425),translation=(8.5,0,-15),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.425),translation=(8.8,0,-17),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.425),translation=(9.1,0,-19),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.425),translation=(9.4,0,-21),
            children=[
            Group(USE='ENTIRENET')])]),
        Group(DEF='FDNETSPort',
          children=[
          Transform(rotation=(0,1,0,1.725),translation=(-7.4,0,-1),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.725),translation=(-7.7,0,-3),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.725),translation=(-8,0,-5),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.725),translation=(-8.3,0,-7),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.725),translation=(-8.6,0,-9),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.725),translation=(-8.9,0,-11),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.725),translation=(-9.2,0,-13),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.725),translation=(-9.5,0,-15),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.725),translation=(-9.8,0,-17),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.725),translation=(-10.1,0,-19),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(rotation=(0,1,0,1.725),translation=(-10.4,0,-21),
            children=[
            Group(USE='ENTIRENET')])]),
        Group(DEF='FDNetAft',
          children=[
          Transform(translation=(-2,0,0),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(translation=(-4,0,0),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(translation=(-6,0,0),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(translation=(2,0,0),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(translation=(4,0,0),
            children=[
            Group(USE='ENTIRENET')]),
          Transform(translation=(6,0,0),
            children=[
            Group(USE='ENTIRENET')])])])]),
    Viewpoint(description='STBD side Aft',orientation=(0.003,0.998,0.065,1.1858),position=(28.4,-2.2,-0.1)),
    Viewpoint(description='AftBelow',orientation=(0.563,0.549,-0.618,2.0717),position=(-1.4,-26.2,-11.9)),
    Viewpoint(description='STBD Bow',orientation=(-0.013,1,0.017,1.615),position=(31.7,1.5,-138.7)),
    Viewpoint(description='Bow',orientation=(0.006,1,0.023,3.1019),position=(0.6,2.2,-174.4)),
    Viewpoint(description='Bottom Hull Aft',orientation=(0.006,1,-0.025,3.0862),position=(0.6,-11.6,-37.5)),
    Transform(DEF='RooseveltHullNumber',translation=(0,5,-142),
      children=[
      Transform(rotation=(0,0,1,-.3),
        children=[
        Transform(rotation=(0,1,0,1.924),translation=(4.68,0,0),
          children=[
          Shape(DEF='BOARDNOport',
            geometry=Text(string=["80"],
              fontStyle=FontStyle(family=["SANS"],size=4.0,style_='BOLD')),
            appearance=Appearance(DEF='Text',
              material=Material(diffuseColor=(.9,.9,.9))))])]),
      Transform(rotation=(0,0,1,.3),
        children=[
        Transform(rotation=(0,1,0,-1.924),translation=(-2.66,0,-5),
          children=[
          Transform(
            children=[
            Shape(DEF='BOARDNOstar',
              geometry=Text(string=["80"],
                fontStyle=FontStyle(family=["SANS"],size=4.0,style_='BOLD')),
              appearance=Appearance(USE='Text'))])])])]),
    Transform(DEF='RooseveltNameFantail',rotation=(1,0,0,.3),translation=(-2.75,1,-.5),
      children=[
      Transform(
        children=[
        Transform(
          children=[
          Shape(DEF='ROOSEVELT',
            geometry=Text(string=["ROOSEVELT"],
              fontStyle=FontStyle(family=["SANS"],style_='BOLD')),
            appearance=Appearance(USE='Text'))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Hull.py")
