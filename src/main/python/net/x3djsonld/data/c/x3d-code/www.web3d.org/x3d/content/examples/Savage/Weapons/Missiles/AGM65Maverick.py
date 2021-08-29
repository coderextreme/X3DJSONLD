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

newModel=X3D(profile='Interchange',version='3.2',
  head=head(
    children=[
    meta(content='AGM65Maverick.x3d',name='title'),
    meta(content='Al Shaffer',name='creator'),
    meta(content='AGM-65M Maverick Missile, as a component of P-3C Orion aircraft, for MV3204 course.',name='description'),
    meta(content='20 January 2005',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='http://bugzilla.xj3d.org/show_bug.cgi?id=576',name='warning'),
    meta(content='http://en.wikipedia.org/wiki/AGM-65_Maverick',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/smart/agm-65.htm',name='reference'),
    meta(content='http://www.designation-systems.net/dusrm/m-65.html',name='reference'),
    meta(content='http://www.globalsecurity.org/military/systems/munitions/agm-65-pics.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/AGM65Maverick.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  NavigationInfo node and Viewpoint node are added to make examination of objects easier. 
    children=[
    Viewpoint(description='AGM-65 Maverick missile',position=(0,0,15)),
    Transform(rotation=(0,1,0,3.14159),
      children=[
      Transform(DEF='MISSILE_TRANSFORM',
        children=[
        Group(
          #  Draw Cylinder to form main body of the missile. 
          children=[
          Transform(rotation=(0,0,1,1.57),scale=(1,7,1),
            children=[
            Shape(
              geometry=Cylinder(),
              #  Define a color for Low-IR gray, used on many tactical platforms and systems. 
              appearance=Appearance(DEF='LOW_IR_GRAY',
                material=Material(diffuseColor=(.745,.745,.745),emissiveColor=(.1,.1,.1),specularColor=(.3,.3,.3))))]),
          #  Draw Sphere to form nose of missile. 
          Transform(translation=(-7,0,0),
            children=[
            Shape(
              geometry=Sphere(radius=1.005),
              appearance=Appearance(USE='LOW_IR_GRAY'))]),
          #  Draw smaller Sphere for nose guidance lens. 
          Transform(translation=(-7.45,0,0),
            children=[
            Shape(
              geometry=Sphere(radius=.73),
              appearance=Appearance(
                material=Material(diffuseColor=(.722,.525,.043),shininess=.6,specularColor=(.5,.5,.5))))]),
          #  Draw four upper fins around missile body. 
          Group(
            children=[
            Transform(translation=(-2,.99,0),
              children=[
              Shape(DEF='UPPER_FIN',
                appearance=Appearance(USE='LOW_IR_GRAY'),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
                  coord=Coordinate(point=[(0,0,0),(6.3,0,0),(6.3,1.4,0),(0,0,0)])))]),
            Transform(rotation=(1,0,0,1.57),translation=(-2,0,.99),
              children=[
              Shape(USE='UPPER_FIN')]),
            Transform(rotation=(1,0,0,-1.57),translation=(-2,0,-.99),
              children=[
              Shape(USE='UPPER_FIN')]),
            Transform(rotation=(1,0,0,3.14),translation=(-2,-.99,0),
              children=[
              Shape(USE='UPPER_FIN')])]),
          #  Draw four lower fins around missile body. 
          Group(
            children=[
            Transform(translation=(5.8,.99,0),
              #  Draw fin object 
              children=[
              Shape(DEF='LOWER_FIN',
                appearance=Appearance(USE='LOW_IR_GRAY'),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(-.4,0,0),(-.4,1.4,0),(.66,1.4,0),(.66,0,0),(0,0,0)]))),
              #  Draw pinion object 
              Shape(DEF='LOWER_FIN_PINION',
                appearance=Appearance(USE='LOW_IR_GRAY'),
                geometry=Cylinder(height=.45,radius=.1))]),
            Transform(rotation=(1,0,0,1.57),translation=(5.8,0,.99),
              children=[
              Shape(USE='LOWER_FIN'),
              Shape(USE='LOWER_FIN_PINION')]),
            Transform(rotation=(1,0,0,-1.57),translation=(5.8,0,-.99),
              children=[
              Shape(USE='LOWER_FIN'),
              Shape(USE='LOWER_FIN_PINION')]),
            Transform(rotation=(1,0,0,3.14),translation=(5.8,-.99,0),
              children=[
              Shape(USE='LOWER_FIN'),
              Shape(USE='LOWER_FIN_PINION')])]),
          #  Draw yellow band around body. 
          Transform(rotation=(0,0,1,1.57),translation=(-5,0,0),
            children=[
            Shape(
              geometry=Cylinder(bottom=False,height=.75,radius=1.01,top=False),
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,0),specularColor=(.3,.3,.3))))]),
          #  Draw brown band around body. 
          Transform(rotation=(0,0,1,1.57),translation=(4.85,0,0),
            children=[
            Shape(
              geometry=Cylinder(bottom=False,height=.75,radius=1.01,top=False),
              appearance=Appearance(
                material=Material(diffuseColor=(.55,.27,.08))))]),
          #  Draw black rings around body. 
          Group(
            children=[
            Transform(rotation=(0,0,1,1.57),translation=(-6.3,0,0),
              children=[
              Shape(DEF='BLACK_RING',
                geometry=Cylinder(bottom=False,height=.03,radius=1.01,top=False),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,0))))]),
            Transform(rotation=(0,0,1,1.57),translation=(-3.5,0,0),
              children=[
              Shape(USE='BLACK_RING')]),
            Transform(rotation=(0,0,1,1.57),translation=(2,0,0),
              children=[
              Shape(USE='BLACK_RING')]),
            Transform(rotation=(0,0,1,1.57),translation=(6.85,0,0),
              children=[
              Shape(USE='BLACK_RING')])]),
          #  Draw exhaust port of missile. 
          Transform(rotation=(0,1,0,1.57),translation=(7.01,0,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,0),specularColor=(.3,.3,.3))),
              geometry=Cylinder(height=0.01,radius=.9))]),
          #  Draw launch rails of body of missile. 
          Group(
            children=[
            Transform(rotation=(1,0,0,.785),translation=(-4.9,.68,.68),
              children=[
              Shape(
                geometry=Box(size=(1.2,.25,.75)),
                appearance=Appearance(DEF='DARK_GRAY',
                  material=Material(diffuseColor=(.55,.55,.55),specularColor=(.3,.3,.3))))]),
            Transform(rotation=(1,0,0,.785),translation=(2,.68,.68),
              children=[
              Shape(
                geometry=Box(size=(3.5,.25,.75)),
                appearance=Appearance(USE='DARK_GRAY'))]),
            Transform(rotation=(0,0,1,1.57),translation=(-4.9,.93,.63),
              children=[
              Shape(DEF='SHORT_RAIL',
                geometry=Cylinder(height=1.2,radius=.08),
                appearance=Appearance(USE='DARK_GRAY'))]),
            Transform(rotation=(0,0,1,1.57),translation=(-4.9,.63,.93),
              children=[
              Shape(USE='SHORT_RAIL')]),
            Transform(rotation=(0,0,1,1.57),translation=(2,.63,.93),
              children=[
              Shape(DEF='LONG_RAIL',
                geometry=Cylinder(height=3.5,radius=.08),
                appearance=Appearance(USE='DARK_GRAY'))]),
            Transform(rotation=(0,0,1,1.57),translation=(2,.93,.63),
              children=[
              Shape(USE='LONG_RAIL')])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AGM65Maverick.py")
