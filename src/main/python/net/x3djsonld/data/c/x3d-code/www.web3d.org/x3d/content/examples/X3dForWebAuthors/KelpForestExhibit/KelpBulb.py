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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='KelpBulb.x3d',name='title'),
    meta(content='One leaf of Kelp moving around a Bulb. Cycle time is 11 seconds, which is twice the cycle time of tank surface motion.',name='description'),
    meta(content='Joseph Cannon, Dan DeVos',name='creator'),
    meta(content='25 September 1998',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='KelpPrototype.x3d',name='reference'),
    meta(content='http://faculty.nps.edu/brutzman/kelp',name='reference'),
    meta(content='KelpForestDesignPaperWeb3dSymposiumFebruary2002.pdf',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestDesignPaperWeb3dSymposiumFebruary2002.pdf',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Teaching3d-KelpForestCaseStudy.pdf',name='reference'),
    meta(content='All content has permissions for free use. Please provide credit to the Naval Postgraduate School (NPS) Modeling Virtual Environments and Simulation (MOVES) Institute.',name='accessRights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpBulb.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='KelpBulb.x3d'),
    Group(
      children=[
      Group(
        children=[
        Transform(rotation=(0.0,0.0,1.0,1.5707),
          children=[
          Shape(DEF='Stem',
            appearance=Appearance(
              material=Material(DEF='stipeColor',diffuseColor=(0.882,0.757,0.184))),
            geometry=Cylinder(height=2.5,radius=0.15))]),
        Transform(scale=(0.75,0.6,0.6),translation=(1.8,0.0,0.0),
          children=[
          Shape(DEF='Bulb',
            appearance=Appearance(
              material=Material(USE='stipeColor')),
            geometry=Sphere(),)])]),
      LOD(DEF='Leaf',range=[90],
        children=[
        Transform(
          children=[
          Shape(DEF='HighResolutionLeaf',
            appearance=Appearance(
              material=Material(diffuseColor=(0.694,0.525,0.176))),
            geometry=Extrusion(DEF='BLADE_SHAPE',beginCap=False,creaseAngle=1.57,crossSection=[(0.06,1.0),(0.06,-1.0),(-0.06,-1.0),(-0.06,1.0)],endCap=False,orientation=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,0.2),(0.0,1.0,0.0,0.9),(0.0,1.0,0.0,0.45),(0.0,1.0,0.0,0.0)],scale=[(1.0,0.1),(1.0,0.3),(1.0,0.55),(1.0,0.75),(1.0,0.4),(1.0,0.01)],solid=False,spine=[(1.9,0.0,0.0),(2.5,0.0,0.0),(4.0,0.0,0.0),(7.0,0.0,0.0),(16.0,0.0,0.0),(21.0,0.0,0.0)]))]),
        Transform(translation=(1.0,0.0,0.0),
          children=[
          Shape(DEF='LowResolutionLeaf',
            appearance=Appearance(
              material=Material(diffuseColor=(0.694,0.525,0.176))),
            geometry=IndexedFaceSet(coordIndex=[1,0,9,-1,2,1,9,8,-1,3,2,8,7,-1,4,3,7,6,-1,5,4,6],solid=False,
              coord=Coordinate(point=[(0.0,0.0,0.0),(1.0,0.5,0.0),(4.0,1.1,0.0),(7.0,1.5,0.0),(16.0,0.8,0.0),(21.0,0.0,0.0),(16.0,-0.8,0.0),(7.0,-1.5,0.0),(4.0,-1.1,0.0),(1.0,-0.5,0.0)])))])])]),
    TimeSensor(DEF='ANIMATOR',cycleInterval=11.0,loop=True),
    CoordinateInterpolator(DEF='BLADE_MOTION',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(1.9,0.0,0.0),(2.5,0.0,0.0),(4.0,0.0,0.0),(7.0,0.0,0.0),(16.0,0.0,0.0),(21.0,0.0,0.0),(1.9,0.0,0.0),(2.5,0.6,0.0),(4.0,1.0,0.0),(7.0,3.0,0.0),(16.0,3.5,0.0),(21.0,0.0,0.0),(1.9,0.0,0.0),(2.5,0.0,0.0),(4.0,0.0,0.0),(7.0,0.0,0.0),(16.0,0.6,0.0),(21.0,2.0,0.0),(1.9,0.0,0.0),(2.5,-0.6,0.0),(4.0,-1.0,0.0),(7.0,-3.0,0.0),(16.0,-3.5,0.0),(21.0,0.0,0.0),(1.9,0.0,0.0),(2.5,0.0,0.0),(4.0,0.0,0.0),(7.0,0.0,0.0),(16.0,0.0,0.0),(21.0,0.0,0.0)]),
    ROUTE(fromField='fraction_changed',fromNode='ANIMATOR',toField='set_fraction',toNode='BLADE_MOTION'),
    ROUTE(fromField='value_changed',fromNode='BLADE_MOTION',toField='set_spine',toNode='BLADE_SHAPE')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for KelpBulb.py")
