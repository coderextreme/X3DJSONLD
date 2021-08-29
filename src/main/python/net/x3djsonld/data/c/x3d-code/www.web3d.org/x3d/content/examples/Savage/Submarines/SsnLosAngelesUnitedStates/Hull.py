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
    meta(content='Hull of 688 Submarine',name='description'),
    meta(content='LT Ken Curtin',name='creator'),
    meta(content='10 August 2003',name='created'),
    meta(content='5 December 2003',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/ssn-688.htm',name='reference'),
    meta(content='http://www.combatindex.com/store/3d/ssn688_model.html',name='reference'),
    meta(content='688, Hull, Submarine',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/Hull.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='Hull',
      children=[
      Transform(DEF='Rotate180',rotation=(1,0,0,3.14),translation=(0,10,0),
        children=[
        Transform(DEF='Top',rotation=(0,0,1,-1.57),translation=(0,10,0),
          children=[
          Shape(
            appearance=Appearance(DEF='Black',
              material=Material(diffuseColor=(.1,.1,.1))),
            geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.00,5.00),(1.9,4.6),(3.55,3.55),(4.6,1.9),(5.00,0.00),(4.6,-1.9),(3.55,-3.55),(1.9,-4.6),(0.00,-5.00)],scale=[(.10,.10),(.25,.25),(.35,.35),(.40,.40),(.50,.50),(.64,.64),(.78,.78),(.85,.85),(.93,.93),(1,1),(1,1),(.94,.94),(.87,.87),(.81,.81),(.74,.74),(.60,.60)],solid=False,spine=[(0,-52.4,0),(0,-49.68,0),(0,-46.92,0),(0,-44.16,0),(0,-41.4,0),(0,-38.64,0),(0,-35.88,0),(0,-33.12,0),(0,-30.36,0),(0,-27.6,0),(0,41.4,0),(0,44.16,0),(0,46.92,0),(0,49.68,0),(0,52.44,0),(0,55.2,0)]))])]),
      Transform(DEF='Bottom',rotation=(0,0,1,-1.57),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.6,0,0))),
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.00,5.00),(1.9,4.6),(3.55,3.55),(4.6,1.9),(5.00,0.00),(4.6,-1.9),(3.55,-3.55),(1.9,-4.6),(0.00,-5.00)],scale=[(.10,.10),(.25,.25),(.35,.35),(.40,.40),(.50,.50),(.64,.64),(.78,.78),(.85,.85),(.93,.93),(1,1),(1,1),(.94,.94),(.87,.87),(.81,.81),(.74,.74),(.60,.60)],solid=False,spine=[(0,-52.4,0),(0,-49.68,0),(0,-46.92,0),(0,-44.16,0),(0,-41.4,0),(0,-38.64,0),(0,-35.88,0),(0,-33.12,0),(0,-30.36,0),(0,-27.6,0),(0,41.4,0),(0,44.16,0),(0,46.92,0),(0,49.68,0),(0,52.44,0),(0,55.2,0)]))]),
      Transform(DEF='SonarSphere',scale=(.6,.6,.6),translation=(55.2,0,0),
        children=[
        Shape(
          geometry=Sphere(radius=5),
          appearance=Appearance(USE='Black'))])])])
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
