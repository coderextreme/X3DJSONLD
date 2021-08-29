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
    GeoLOD(center=(41.37958958474797,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport10-10.x3d'],child2Url=['../../tiles/5/newport10-11.x3d'],child3Url=['../../tiles/5/newport11-10.x3d'],child4Url=['../../tiles/5/newport11-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,2,2,1,0,0,0,0,2,0,1,0,0,0,0,0,0,1,1,0,0,2,1,1,3,5,3,0,0,3,0,1,0,0,0,0,0,0,0,1,2,2,1,1,3,3,4,6,4,4,3,2,0,0,0,0,0,0,0,0,0,2,3,3,2,1,0,5,10,15,10,5,4,4,2,1,0,0,0,0,0,0,0,4,5,6,8,8,8,7,14,18,15,9,6,7,6,3,0,0,0,0,0,0,0,5,7,9,9,10,10,10,10,12,17,10,9,10,8,5,0,7,5,3,0,0,0,10,12,16,10,11,11,11,9,10,11,8,10,11,9,4,2,7,4,0,0,1,3,12,14,14,14,16,14,12,10,10,10,9,11,11,10,0,2,6,0,0,0,8,7,16,18,16,19,21,18,17,15,13,13,13,13,14,13,0,0,0,0,0,0,7,9,19,17,21,21,21,22,21,19,17,14,16,15,15,11,6,0,0,1,10,6,13,14,20,18,22,21,21,22,21,19,17,14,16,15,14,10,7,0,0,1,10,7,13,14],
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
