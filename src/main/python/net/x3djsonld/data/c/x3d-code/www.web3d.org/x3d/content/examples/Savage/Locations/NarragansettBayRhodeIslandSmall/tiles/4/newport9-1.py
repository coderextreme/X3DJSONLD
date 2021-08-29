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
    GeoLOD(center=(41.59143480887271,-71.41065102236746,0.0),range=2150.0764,child1Url=['../../tiles/5/newport18-2.x3d'],child2Url=['../../tiles/5/newport18-3.x3d'],child3Url=['../../tiles/5/newport19-2.x3d'],child4Url=['../../tiles/5/newport19-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.41872188014497,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,5,3,4,6,5,4,1,1,0,0,0,1,4,3,2,0,0,0,0,0,0,0,0,0,16,10,3,2,4,1,6,6,3,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,11,6,5,7,6,6,6,6,8,5,3,3,4,5,5,3,0,0,0,0,0,0,0,0,6,6,8,10,7,11,12,9,7,4,6,5,5,7,7,7,3,1,0,0,0,0,0,0,5,7,7,12,16,8,6,6,8,7,7,9,7,8,7,6,4,6,4,2,0,0,0,0,8,8,10,9,9,8,5,7,9,10,9,9,10,10,8,8,10,6,6,5,1,0,0,0,10,9,12,10,9,10,10,9,9,11,11,11,11,10,10,8,9,10,8,9,2,0,0,0,9,11,12,10,9,9,11,11,11,13,14,10,10,12,10,13,11,10,12,7,3,0,0,0,8,10,11,12,11,9,14,14,12,12,13,10,11,12,12,12,13,13,9,6,1,0,0,0,9,9,9,10,12,15,15,13,14,14,12,12,11,11,11,10,11,11,10,10,1,0,0,0,11,9,11,12,11,12,11,14,13,13,10,10,11,10,11,11,9,8,7,6,0,0,0,0,8,11,10,13,13,11,10,13,13,6,8,8,9,8,9,8,7,10,11,4,0,0,0,0,8,8,7,9,9,10,13,8,4,5,6,6,6,6,4,7,6,5,4,3,0,0,0,0,9,8,6,6,9,10,6,4,4,6,4,5,4,5,5,6,5,4,4,7,2,0,0,0,9,7,6,6,10,12,5,3,4,7,4,4,4,4,4,5,5,5,3,8,6,0,0,0],
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
