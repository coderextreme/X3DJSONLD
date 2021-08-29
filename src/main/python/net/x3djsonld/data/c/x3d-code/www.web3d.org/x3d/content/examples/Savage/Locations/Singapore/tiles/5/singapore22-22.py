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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore22-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4043609355158675,103.90582275083842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[22,19,17,15,13,11,10,9,8,8,9,9,8,8,7,6,5,5,6,7,7,7,8,8,8,8,6,6,6,6,4,4,5,4,2,1,22,21,19,18,16,13,11,9,9,9,10,10,9,9,8,7,6,6,7,7,7,7,8,8,9,9,8,7,8,7,7,6,4,3,1,1,24,23,22,20,18,15,11,9,9,9,10,10,10,9,8,7,6,6,6,6,7,7,8,8,10,11,10,9,8,8,9,8,5,2,0,0,26,26,26,24,21,17,12,9,9,9,9,10,10,9,8,7,7,6,6,6,7,7,8,9,12,13,12,10,8,8,9,9,6,3,1,0,26,28,28,26,23,18,14,11,9,9,9,9,9,9,7,7,7,6,6,6,7,7,8,10,12,14,13,12,9,8,9,9,7,4,2,1,25,27,28,25,22,19,16,13,11,9,9,8,8,8,7,7,7,6,6,6,7,8,8,9,11,13,12,12,10,10,9,9,7,5,2,0,24,26,26,24,21,19,17,15,13,11,9,8,8,7,6,7,7,7,6,6,8,9,8,9,10,11,11,11,11,10,9,8,7,5,3,0,24,25,24,23,21,19,17,16,15,13,11,9,8,7,6,6,7,7,7,7,9,9,8,8,9,9,9,9,10,10,9,8,8,7,3,0,24,24,23,22,20,19,19,18,17,15,13,10,8,7,5,5,7,7,6,7,8,9,7,7,7,8,8,9,10,11,10,9,8,7,3,0,24,25,24,23,22,22,21,20,18,16,14,11,9,7,5,5,5,5,4,4,4,4,4,5,5,7,12,14,13,12,11,10,8,6,3,2,24,25,25,25,24,24,24,22,20,18,14,12,10,8,5,4,5,4,3,2,1,1,2,3,4,7,14,17,15,14,12,10,7,4,3,3,26,28,29,29,29,28,26,24,22,19,15,12,10,9,9,8,6,5,4,3,2,2,2,3,5,8,12,14,16,16,13,10,7,5,5,5,28,30,32,33,32,30,28,26,24,20,16,12,10,10,10,9,8,7,6,5,4,4,5,6,9,11,11,13,15,16,12,9,6,5,5,6,31,33,34,33,31,28,26,26,25,22,17,13,10,8,8,8,7,7,7,7,9,12,17,20,22,21,17,14,13,11,9,7,6,6,6,7,35,36,36,34,30,28,26,27,26,23,18,13,10,8,7,7,7,7,7,9,12,19,27,32,32,29,21,15,10,7,6,5,5,6,7,8,38,39,40,38,35,32,30,31,30,26,19,14,10,8,7,6,6,6,7,9,13,19,27,31,28,24,18,13,8,5,4,4,4,5,7,8,40,42,43,41,38,36,34,34,33,28,21,15,11,8,7,6,6,6,7,10,13,19,26,28,24,19,15,11,7,4,4,4,4,5,7,9,41,42,43,41,39,37,35,35,33,28,21,15,12,10,9,8,7,7,8,10,13,15,17,18,18,16,11,7,6,4,4,4,4,5,7,9,42,42,42,41,39,38,37,35,32,27,20,16,13,12,11,10,8,7,9,10,12,12,10,9,12,12,8,5,4,4,4,4,4,5,8,10,41,41,40,38,36,34,33,32,30,26,22,18,15,13,11,9,8,8,9,10,10,10,8,8,10,10,8,6,4,3,5,7,7,7,8,9,39,39,38,35,32,30,29,29,28,26,23,20,17,14,11,8,8,8,10,10,9,8,8,8,8,8,9,8,3,1,6,10,9,9,8,8,35,35,34,31,28,26,25,25,26,27,26,24,20,17,13,11,9,9,9,9,9,8,7,7,8,8,9,8,3,1,6,9,9,8,7,6],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
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
