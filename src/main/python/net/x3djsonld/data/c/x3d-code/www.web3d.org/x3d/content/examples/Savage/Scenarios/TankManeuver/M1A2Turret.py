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
    meta(content='M1A2Turret',name='title'),
    meta(content='Untextured M1A2 for use in larger scenes.',name='description'),
    meta(content='Michael Martin',name='creator'),
    meta(content='7 September 2004',name='created'),
    meta(content='26 November 2004',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/land/m1.htm',name='reference'),
    meta(content='M1A2 tank',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/TankManeuver/M1A2Turret.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Group(DEF='Turret',
        children=[
        Transform(center=(0,0,.25),translation=(0,.63,-.15),
          children=[
          Shape(
            appearance=Appearance(DEF='Friendly',
              material=Material(diffuseColor=(0,0,1))),
            geometry=IndexedFaceSet(coordIndex=[9,0,1,-1,9,1,2,-1,9,2,3,4,5,8,-1,5,6,8,-1,6,7,8,-1,7,0,9,8,-1,9,8,7,0,-1,0,10,11,12,1,-1,1,12,13,2,-1,2,13,14,15,3,-1,3,15,16,4,-1,16,15,14,17,-1,17,18,5,4,16,-1,18,19,6,5,-1,19,20,21,7,6,-1,7,21,10,0,-1,20,11,10,21,-1,20,19,12,11,-1,19,18,13,12,-1,18,17,14,13],
              coord=Coordinate(point=[(.21,.15,1.28),(.73,.15,1.01),(.73,.21,.15),(.69,.23,-1),(-.69,.23,-1),(-.73,.21,.15),(-.73,.15,1.01),(-.21,.15,1.28),(-.22,.22,.21),(.22,.22,.21),(.22,-.05,1.41),(.44,-.16,1.37),(.9,-.16,1.13),(.93,-.18,.2),(.84,-.11,-1.01),(.78,.07,-1.15),(-.78,.07,-1.15),(-.84,-.11,-1.01),(-.93,-.18,.2),(-.9,-.16,1.13),(-.44,-.16,1.37),(-.22,-.05,1.41)]))),
          Transform(rotation=(1,0,0,1.57),translation=(0,0,2.375),
            children=[
            Transform(center=(0,-1.11,0),rotation=(1,0,0,0),
              children=[
              Shape(DEF='GunTube',
                appearance=Appearance(USE='Friendly'),
                geometry=Cylinder(height=2.22,radius=.075)),
              Transform(scale=(.8,1,1.1),translation=(0,-.2,-.03),
                children=[
                Shape(DEF='BoreEvac',
                  appearance=Appearance(USE='Friendly'),
                  geometry=Cylinder(height=.42,radius=.105))]),
              Transform(translation=(-.15,-.9,0),
                children=[
                Shape(DEF='Coax',
                  appearance=Appearance(USE='Friendly'),
                  geometry=Cylinder(height=.42,radius=.03))])])]),
          Transform(translation=(0,-.165,.25),
            children=[
            Shape(
              appearance=Appearance(USE='Friendly'),
              geometry=Cylinder(height=.1,radius=.665))]),
          Transform(translation=(0,.075,-1.2),
            children=[
            Shape(
              appearance=Appearance(USE='Friendly'),
              geometry=Box(size=(1.4,.22,.28)))]),
          Transform(rotation=(0,1,0,-.37),translation=(-.3,.225,0),
            children=[
            Shape(DEF='CommandersHatch',
              appearance=Appearance(USE='Friendly'),
              geometry=Cylinder(height=.06,radius=.25)),
            Transform(center=(0,0,-.11),rotation=(1,0,0,-.15),translation=(0,.12,.35),
              children=[
              Shape(
                appearance=Appearance(USE='Friendly'),
                geometry=Box(size=(.08,.08,.3))),
              Transform(rotation=(1,0,0,1.57),translation=(0,0,.35),
                children=[
                Shape(
                  appearance=Appearance(USE='Friendly'),
                  geometry=Cylinder(height=.4,radius=.015))]),
              Transform(translation=(.12,0,.04),
                children=[
                Shape(
                  appearance=Appearance(USE='Friendly'),
                  geometry=Box(size=(.16,.09,.07)))])]),
            Transform(rotation=(1,0,0,-0.785),translation=(0,.05,.2),
              children=[
              Shape(
                appearance=Appearance(USE='Friendly'),
                geometry=Box(size=(.1,.1,.2)))])]),
          Transform(rotation=(0,1,0,.78),translation=(.3,.215,0),
            children=[
            Shape(DEF='LoadersHatch',
              appearance=Appearance(USE='Friendly'),
              geometry=Cylinder(height=.04,radius=.2)),
            Transform(translation=(0,.095,.2),
              children=[
              Shape(
                appearance=Appearance(USE='Friendly'),
                geometry=Box(size=(.1,.15,.15))),
              Transform(rotation=(1,0,0,1.57),translation=(0,.05,.2),
                children=[
                Shape(
                  appearance=Appearance(USE='Friendly'),
                  geometry=Cylinder(height=.25,radius=.015))]),
              Transform(translation=(.11,.03,.03),
                children=[
                Shape(
                  appearance=Appearance(USE='Friendly'),
                  geometry=Box(size=(.16,.09,.07)))])])]),
          Transform(translation=(.4,.275,.5),
            children=[
            Shape(DEF='CITV',
              appearance=Appearance(USE='Friendly'),
              geometry=Cylinder(height=.18,radius=.125))]),
          Transform(translation=(-.4,.215,.6),
            children=[
            Shape(DEF='Doghouse',
              appearance=Appearance(USE='Friendly'),
              geometry=Box(size=(.38,.15,.33)))]),
          Transform(translation=(0,.31,-1.03),
            children=[
            Shape(DEF='Crosswind',
              appearance=Appearance(USE='Friendly'),
              geometry=Cylinder(height=.25,radius=.03)),
            Transform(translation=(0,.125,0),
              children=[
              Shape(
                appearance=Appearance(USE='Friendly'),
                geometry=Box(size=(.18,.05,.06)))])]),
          Transform(translation=(.6,.695,-.9),
            children=[
            Shape(
              appearance=Appearance(USE='Friendly'),
              geometry=Cylinder(height=1,radius=.005))]),
          Transform(translation=(-.6,.695,-.9),
            children=[
            Shape(
              appearance=Appearance(USE='Friendly'),
              geometry=Cylinder(height=1,radius=.005))]),
          Transform(translation=(.22,.23,-.7),
            children=[
            Shape(
              appearance=Appearance(USE='Friendly'),
              geometry=Box(size=(.42,.04,.59)))]),
          Transform(translation=(-.22,.23,-.7),
            children=[
            Shape(
              appearance=Appearance(USE='Friendly'),
              geometry=Box(size=(.42,.04,.59)))]),
          Transform(translation=(-.76,.085,-.34),
            children=[
            Shape(DEF='RSponsonBox',
              appearance=Appearance(USE='Friendly'),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1,3,2,4,5,-1,1,0,5,4,-1,0,3,5,-1,2,1,4],
                coord=Coordinate(point=[(.11,.135,.54),(.11,.135,-.54),(-.06,.135,-.54),(-.11,.135,.54),(-.06,-.075,-.54),(-.11,-.135,.54)])))]),
          Transform(translation=(.76,.085,-.34),
            children=[
            Shape(DEF='LSponsonBox',
              appearance=Appearance(USE='Friendly'),
              geometry=IndexedFaceSet(ccw=False,coordIndex=[0,1,2,3,-1,3,2,4,5,-1,1,0,5,4,-1,0,3,5,-1,2,1,4],
                coord=Coordinate(point=[(-.11,.135,.54),(-.11,.135,-.54),(.06,.135,-.54),(.11,.135,.54),(.06,-.075,-.54),(.11,-.135,.54)])))]),
          Transform(rotation=(-1,-1,0,.6),translation=(-.83,.1,.33),
            children=[
            Shape(
              appearance=Appearance(USE='Friendly'),
              geometry=Extrusion(crossSection=[(.08,.09),(.12,.06),(.04,-.09),(-.04,-.09),(-.12,.06),(-.08,.09),(.08,.09)],scale=[(.5,1),(1,1),(.8,1)],spine=[(0,-.075,0),(0,.025,0),(0,.075,0)]))]),
          Transform(rotation=(-1,1,0,.6),translation=(.83,.1,.33),
            children=[
            Shape(
              appearance=Appearance(USE='Friendly'),
              geometry=Extrusion(crossSection=[(.08,.09),(.12,.06),(.04,-.09),(-.04,-.09),(-.12,.06),(-.08,.09),(.08,.09)],scale=[(.5,1),(1,1),(.8,1)],spine=[(0,-.075,0),(0,.025,0),(0,.075,0)]))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for .py")
