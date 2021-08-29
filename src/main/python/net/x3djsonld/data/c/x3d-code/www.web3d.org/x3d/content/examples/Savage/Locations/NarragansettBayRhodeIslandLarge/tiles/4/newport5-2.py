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
    GeoLOD(center=(41.37958958474797,-71.68129407658296,0.0),range=6150.5674,child1Url=['../../tiles/5/newport10-4.x3d'],child2Url=['../../tiles/5/newport10-5.x3d'],child3Url=['../../tiles/5/newport11-4.x3d'],child4Url=['../../tiles/5/newport11-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[7,3,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,-1,-3,12,11,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,9,10,9,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,21,15,11,7,6,0,0,0,0,0,0,0,0,0,0,1,0,2,2,0,0,37,27,22,20,19,14,5,4,0,0,3,4,4,0,3,3,3,2,1,1,0,0,36,35,33,25,28,24,26,14,7,5,4,5,0,0,0,4,2,5,3,4,0,0,40,42,34,37,33,34,29,24,18,18,11,7,0,0,0,6,7,7,6,5,5,4,32,32,34,35,35,33,31,29,25,23,22,22,6,7,6,7,9,9,8,2,7,7,26,25,27,26,26,33,33,31,30,27,25,22,20,15,9,10,11,10,11,8,11,11,22,23,27,31,31,29,28,26,22,26,22,18,17,13,17,16,12,11,11,11,11,10,20,23,27,31,34,30,22,11,22,29,30,34,25,20,24,24,12,13,13,15,12,9,21,17,31,30,32,32,16,11,14,17,17,28,34,31,26,28,17,15,15,16,14,11,13,17,26,21,26,20,12,12,12,13,13,13,26,34,31,36,27,14,12,12,16,15,11,11,11,12,11,11,11,11,11,11,11,11,25,30,35,35,30,22,14,10,14,13,11,11,11,11,11,11,11,11,11,11,11,17,33,37,41,41,31,26,19,15,12,12,11,11,11,11,11,11,11,11,11,11,14,29,33,42,41,36,26,19,22,22,22,24,11,11,11,15,11,11,11,11,11,17,29,38,41,36,31,22,16,15,30,21,23,25,11,11,16,23,17,12,11,11,11,13,28,44,43,35,26,23,16,17,15,14,14,14,11,11,19,25,17,10,11,13,20,21,35,39,34,27,20,16,16,16,16,15,18,26,15,19,20,28,22,17,19,23,33,30,33,38,36,30,22,17,22,24,16,16,16,19,16,20,21,28,22,18,20,24,34,31,33,37,36,30,22,17,22,24,16,16,16,18],
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
