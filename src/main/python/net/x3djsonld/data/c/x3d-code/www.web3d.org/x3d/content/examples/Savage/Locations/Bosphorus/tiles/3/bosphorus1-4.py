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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_14',geoSystem=['GDC'],position=(40.788909617338845,29.10513432121479,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.788909617338845,29.10513432121479,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus2-8.x3d'],child2Url=['../../tiles/4/bosphorus2-9.x3d'],child3Url=['../../tiles/4/bosphorus3-8.x3d'],child4Url=['../../tiles/4/bosphorus3-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus1-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.73424150505923,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[-1,-3,-3,-4,-3,-2,-1,0,0,0,0,0,0,0,0,0,0,0,-2,0,-2,0,-2,-2,-1,-2,-3,-1,-2,-1,0,0,1,0,0,0,0,0,0,0,-1,1,-2,0,-2,-1,-1,-3,-1,0,-2,0,0,0,0,0,-1,-1,0,0,0,2,0,0,-2,-4,0,-1,-1,-1,-2,0,-2,-2,-2,-1,0,0,0,0,0,-2,0,0,0,0,0,0,0,-1,-1,0,-1,0,0,0,-2,-1,0,0,0,0,1,0,-1,0,-2,0,0,-1,0,0,0,0,-1,-2,-2,-2,-1,0,-1,-2,0,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,-2,-1,-2,-3,-2,-2,0,0,0,-1,0,0,0,0,-1,-1,-2,0,-1,-1,0,-2,0,-2,-1,-2,-1,-3,-2,0,-1,0,0,0,0,-1,-1,0,-1,0,-1,0,-1,-2,-3,-2,-2,-1,-1,-2,-2,-1,0,-2,0,0,0,1,0,0,-1,0,-2,0,0,-1,-1,-1,-1,-1,-1,-2,0,-1,-3,-2,0,0,0,1,3,0,0,-1,0,-1,-1,-2,-1,-1,0,-1,0,-2,-2,-1,-2,-2,0,1,0,0,0,-2,0,-2,0,-1,-3,0,-1,0,-2,-1,0,-2,-2,-2,-3,-2,0,0,0,0,-1,-1,-1,0,0,0,-3,-1,-2,0,0,-1,-3,0,-2,-1,-1,-1,0,-2,0,-2,0,-1,0,-1,0,0,-1,-1,-1,-2,-2,0,-1,-1,-2,-1,0,-1,-2,-3,0,0,-1,-2,-1,-1,-2,-2,0,0,-1,0,0,0,0,-2,0,-3,0,-1,-2,-1,-3,1,0,-1,-1,-1,0,0,-2,-3,-1,-3,0,0,-1,-1,-1,-2,-3,-2,0,-2,-2,-1,0,-1,0,-2,0,-2,-1,-1,0,0,0,-1,-1,-2,0,-2,-2,-1,0,-2,-1,0,-1,0,-1,0,0,0,-1,-2,-1,0,0,0,-1,0,-4,-1,-3,-1,-1,-1,-2,-1,-1,-2,-1,-1,-1,-1,0,0,0,0,-2,0,0,-1,-1,0,-2,-4,-2,-1,-1,0,-3,0,0,0,0,0,-1,-1,0,0,0,-2,-2,-3,0,-2,0,-2,-1,-1,0,0,0,0,0,0,0,0,-1,-2,-1,0,-2,0,-2,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,-1,-1,-2,-2,-1,-2,-1,-2,0,1,1,0,0,0,-1,-1,0,0,0],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
