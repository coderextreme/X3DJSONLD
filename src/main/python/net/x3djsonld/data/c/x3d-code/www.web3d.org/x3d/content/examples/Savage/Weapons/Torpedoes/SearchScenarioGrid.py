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
    meta(content='SearchScenarioGrid.x3d',name='title'),
    meta(content='Background grid for torpedo search scenario. Originally a CS4202 VRML course project. This file builds a grid of lines which will be used as the surface of the ocean in the animation. The grid provides a good sense of motion.',name='description'),
    meta(content='Haruna R. Isa, LT USN',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='1 June 1997',name='created'),
    meta(content='7 June 2004',name='translated'),
    meta(content='7 June 2004',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Torpedoes/SearchScenarioGrid.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='Grid',
      children=[
      Group(DEF='GridGroup1',
        children=[
        Shape(DEF='Line1',
          appearance=Appearance(
            material=Material(emissiveColor=(0.0,0.3,0.3),transparency=0.5)),
          geometry=IndexedLineSet(coordIndex=[0,1],
            coord=Coordinate(point=[(-1600.0,0.0,0.0),(1600.0,0.0,0.0)]))),
        Transform(translation=(0.0,0.0,-200.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,-400.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,-600.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,-800.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,-1000.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,-1200.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,-1400.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,-1600.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,200.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,400.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,600.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,800.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,1000.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,1200.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,1400.0),
          children=[
          Shape(USE='Line1')]),
        Transform(translation=(0.0,0.0,1600.0),
          children=[
          Shape(USE='Line1')])]),
      Transform(rotation=(0.0,1.0,0.0,1.571),
        children=[
        Group(USE='GridGroup1')]),
      Transform(DEF='GridLegend1',rotation=(1.0,0.0,0.0,-1.571),translation=(0.0,0.0,1800.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(emissiveColor=(0.5,0.5,0.5))),
          geometry=Text(length=[600.0],string=["3.2 km"],
            fontStyle=FontStyle(justify=["MIDDLE"],size=300.0)))]),
      Transform(DEF='GridLegend2',rotation=(0.0,1.0,0.0,1.571),
        children=[
        Transform(USE='GridLegend1')]),
      Transform(DEF='GridLegend3',translation=(1500.0,0.0,1750.0),
        children=[
        Transform(DEF='GridLegend3Text',rotation=(1.0,0.0,0.0,-1.571),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(emissiveColor=(1.0,1.0,1.0))),
            geometry=Text(length=[300.0],string=["200 m"],
              fontStyle=FontStyle(justify=["MIDDLE"],size=150.0)))])]),
      Transform(DEF='GridLegend4',rotation=(0.0,1.0,0.0,1.571),translation=(1750.0,0.0,1500.0),
        children=[
        Transform(USE='GridLegend3Text')]),
      Viewpoint(description='Above Grid',orientation=(1.0,0.0,0.0,-1.571),position=(0.0,5000.0,0.0))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SearchScenarioGrid.py")
