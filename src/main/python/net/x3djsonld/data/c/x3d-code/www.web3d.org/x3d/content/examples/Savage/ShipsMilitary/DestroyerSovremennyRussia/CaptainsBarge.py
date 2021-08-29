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
    meta(content='CaptainsBarge.x3d',name='title'),
    meta(content='Kevin Anderson',name='creator'),
    meta(content='29 September 2000',name='created'),
    meta(content='15 September 2002',name='modified'),
    meta(content='Captains Barge for use with Sovremennny and/or other Russian Warships. Designed to specifications and photos supplied by Janes Online.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/CaptainsBarge.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Captains Barge 
    children=[
    Group(DEF='DeckStands',
      children=[
      Transform(translation=(-3.6,-1.35,0),
        children=[
        Shape(DEF='Stand',
          appearance=Appearance(
            material=Material(diffuseColor=(.55,.48,.48))),
          geometry=Box(size=(.5,.55,2.3)))]),
      Transform(translation=(.7,-1.35,0),
        children=[
        Shape(USE='Stand')])]),
    Group(DEF='Hull',
      children=[
      Shape(DEF='BottomHull',
        appearance=Appearance(DEF='Gray',
          material=Material(diffuseColor=(.6,.55,.5))),
        geometry=Extrusion(ccw=False,creaseAngle=1.6,crossSection=[(0,-1.5),(.57,-1.38),(1.065,-1.065),(1.38,-.57),(1.5,0),(1.38,.57),(1.065,1.065),(.57,1.38),(0,1.5),(0,-1.5)],orientation=[(0,0,1,.2),(0,0,1,0),(0,0,1,0),(0,0,1,-.9)],scale=[(.8,.78),(1,1),(1,1),(1,.01)],spine=[(-5,0,0),(0,0,0),(1,0,0),(3.4,0,0)])),
      Shape(DEF='Railing',
        appearance=Appearance(USE='Gray'),
        geometry=Extrusion(ccw=False,creaseAngle=1.6,crossSection=[(-.25,-1.6),(0.025,-1.48),(0.025,1.48),(-.25,1.6)],orientation=[(0,0,1,.2),(0,0,1,0),(0,0,1,0),(0,0,1,-.9)],scale=[(.8,.79),(1,1),(1,1),(1,.01)],solid=False,spine=[(-4.998,0,0),(0,0,0),(1,0,0),(3.4,0,0)])),
      Shape(DEF='Deck',
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.3,.32))),
        geometry=Extrusion(ccw=False,creaseAngle=1.6,crossSection=[(-.05,-1.49),(0.0,-1.46),(0.0,1.46),(-.05,1.49),(-.05,-1.49)],orientation=[(0,0,1,.2),(0,0,1,0),(0,0,1,0),(0,0,1,-.9)],scale=[(.8,.79),(1,1),(1,1),(1,.01)],solid=False,spine=[(-4.98,0,0),(0,0,0),(1,0,0),(3.38,0,0)]))]),
    Group(DEF='Super_Structure',
      children=[
      Shape(DEF='FwdStructure',
        appearance=Appearance(DEF='White',
          material=Material(diffuseColor=(.9,.9,.9))),
        geometry=Extrusion(creaseAngle=1,crossSection=[(-3.6,-1),(-3.6,1),(1,1),(2,.5),(2,-.5),(1,-1),(-3.6,-1),(-3.6,-1)],spine=[(0,0,0),(0,.4,0)])),
      Transform(scale=(.52,1,.6),translation=(0.26,.27,0),
        children=[
        Shape(USE='FwdStructure')])]),
    Group(DEF='Cabin',
      children=[
      Transform(translation=(-2.6,.8,0),
        children=[
        Shape(DEF='Glass',
          appearance=Appearance(
            material=Material(diffuseColor=(.3,.3,.6),transparency=.25)),
          geometry=Box(size=(1.1,.8,1.1)))]),
      Shape(
        appearance=Appearance(USE='White'),
        geometry=Extrusion(crossSection=[(0,0),(-.6,0),(-.6,.5),(0,.5),(0,0)],scale=[(1,1),(.3,.3)],spine=[(-3,.398,.5),(-3,1.399,.5)])),
      Shape(
        appearance=Appearance(USE='White'),
        geometry=Extrusion(ccw=False,crossSection=[(0,0),(-.6,0),(-.6,-.5),(0,-.5),(0,0)],scale=[(1,1),(.3,.3)],spine=[(-3,.398,-.5),(-3,1.399,-.5)])),
      Shape(
        appearance=Appearance(USE='White'),
        geometry=Extrusion(crossSection=[(0,0),(0,.3),(.3,.3),(.3,0),(0,0)],scale=[(1,1),(.4,.4)],spine=[(-2.2,.398,.5),(-2.2,1.399,.5)])),
      Shape(
        appearance=Appearance(USE='White'),
        geometry=Extrusion(ccw=False,crossSection=[(0,0),(0,-.3),(.3,-.3),(.3,0),(0,0)],scale=[(1,1),(.4,.4)],spine=[(-2.2,.398,-.5),(-2.2,1.399,-.5)])),
      Shape(
        appearance=Appearance(USE='White'),
        geometry=Extrusion(crossSection=[(0,-.62),(0,.62),(1.32,.62),(1.32,-.62),(0,-.62)],spine=[(-3.18,1.198,0),(-3.18,1.4,0)])),
      Transform(translation=(-2.55,1.5,0),
        children=[
        Shape(
          appearance=Appearance(USE='White'),
          geometry=Box(size=(.7,.3,.8)))])]),
    Group(DEF='AftDeck',
      children=[
      Transform(translation=(-4.3,.1,0),
        children=[
        Shape(
          appearance=Appearance(USE='White'),
          geometry=Box(size=(.7,.3,2))),
        Transform(translation=(-.2,.15,0),
          children=[
          Shape(
            appearance=Appearance(USE='White'),
            geometry=Box(size=(.3,.27,2)))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CaptainsBarge.py")
