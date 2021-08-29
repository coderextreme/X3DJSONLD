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
    GeoLOD(center=(41.46230108443253,-71.31380072903733,0.0),range=2150.0764,child1Url=['../../tiles/5/newport2-14.x3d'],child2Url=['../../tiles/5/newport2-15.x3d'],child3Url=['../../tiles/5/newport3-14.x3d'],child4Url=['../../tiles/5/newport3-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport1-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45423022665502,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,10,10,8,4,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,10,10,10,9,9,8,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,1,6,9,10,11,10,9,9,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,2,7,10,11,11,12,11,11,0,0,0,0,0,1,3,5,3,0,0,0,0,0,0,0,2,5,9,9,10,10,11,10,0,0,0,0,0,2,4,7,8,4,0,0,0,0,0,0,1,3,6,8,8,8,9,9,0,0,0,0,1,2,4,9,9,6,5,2,0,0,0,0,0,0,3,5,7,8,8,8,0,0,0,0,0,2,2,6,7,8,10,6,0,0,0,0,0,1,2,4,6,7,7,7,0,0,0,0,0,2,2,3,6,11,14,4,0,0,0,0,0,1,3,4,5,6,7,7,0,0,0,0,1,2,3,4,7,13,15,2,0,0,0,0,0,2,4,5,7,6,8,8,0,0,0,0,0,4,7,8,9,11,12,10,0,0,0,0,0,0,4,6,8,7,7,7,0,0,0,0,0,5,9,11,10,9,8,10,1,0,0,0,0,1,4,6,9,8,8,8,0,0,0,0,0,3,7,11,10,9,5,3,0,0,0,0,0,2,4,6,9,9,9,10,8,0,0,0,0,1,8,11,10,9,6,0,0,0,0,0,0,3,5,7,9,10,11,11,17,1,0,0,0,0,9,11,10,10,10,0,0,0,0,0,0,4,5,7,10,11,13,13,16,11,0,0,0,0,9,11,11,10,14,9,1,0,0,0,0,3,5,7,10,12,14,14,15,14,3,0,0,0,5,9,11,11,12,11,5,1,0,0,0,5,6,8,11,13,14,15,15,16,9,0,0,0,5,9,11,12,13,13,8,4,3,1,1,3,5,7,10,12,13,13,17,17,13,4,3,3,11,11,10,13,15,15,8,7,6,0,0,2,4,7,9,12,12,12,15,15,16,14,7,7,12,14,12,13,14,15,11,8,6,3,2,2,3,7,9,12,12,12,15,15,17,17,11,10,12,13,12,12,13,14,12,10,6,3,2,3,5,9,11,14,14,14,17,17,16,14,12,11,11,11,9,9,9,11,13,12,8,4,2,3,7,11,14,14,14,14,20,17,15,11,11,10,8,9,7,6,6,7,11,15,12,7,3,2,8,12,12,12,12,12,21,18,15,10,10,9,8,8,7,6,6,7,10,15,12,8,4,3,8,12,12,12,12,12],
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
