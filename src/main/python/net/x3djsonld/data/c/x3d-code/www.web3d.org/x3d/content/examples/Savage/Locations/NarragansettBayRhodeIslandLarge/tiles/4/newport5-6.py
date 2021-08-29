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
    GeoLOD(center=(41.37958958474797,-71.50541124423569,0.0),range=6150.5674,child1Url=['../../tiles/5/newport10-12.x3d'],child2Url=['../../tiles/5/newport10-13.x3d'],child3Url=['../../tiles/5/newport11-12.x3d'],child4Url=['../../tiles/5/newport11-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,4,8,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,8,7,5,5,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,3,7,12,11,8,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,11,13,10,9,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,16,14,9,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,11,13,11,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,6,9,10,8,8,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,4,7,11,8,6,3,1,7,5,3,0,0,0,0,0,0,3,2,0,0,0,0,5,9,11,10,9,7,6,8,7,4,0,0,0,0,1,0,4,3,0,0,0,0,2,8,9,11,11,9,13,12,5,7,5,0,0,0,0,0,0,0,1,0,0,0,0,3,7,8,8,14,11,14,12,6,1,0,0,0,0,0,0,0,0,0,0,0,0,3,8,11,11,14,11,14,12,7,1,0,0,0,0,0,0,0,0,0,0,0,0,3,8,11,11],
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
