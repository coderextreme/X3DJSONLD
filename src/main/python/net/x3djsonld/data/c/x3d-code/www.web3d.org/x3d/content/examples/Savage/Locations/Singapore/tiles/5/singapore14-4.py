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
        texture=ImageTexture(url=['../../images/5/singapore14-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3345072364919157,103.64728813651608,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[12,13,14,16,16,15,13,11,10,8,9,11,13,14,13,10,8,5,6,10,11,10,10,12,13,11,9,9,9,9,9,9,9,8,9,13,12,12,13,14,15,16,14,12,10,9,10,12,14,15,13,11,9,8,8,10,11,10,10,10,10,9,8,8,8,8,8,8,8,8,11,17,12,12,13,13,14,14,13,11,10,9,11,12,14,15,13,11,10,9,9,10,10,10,9,9,8,7,7,8,8,7,7,7,8,9,12,20,13,13,12,12,12,12,11,10,10,10,11,12,13,13,13,11,10,9,8,8,8,8,8,8,7,6,6,6,7,7,7,8,8,9,14,24,13,12,12,12,11,10,10,10,10,10,11,11,10,9,9,8,8,8,8,7,7,7,7,8,7,7,6,6,7,8,8,8,8,9,14,23,12,12,12,12,11,10,9,9,9,9,10,10,7,3,2,3,4,6,7,7,7,6,7,8,8,8,8,8,8,9,9,8,8,9,12,18,11,11,11,11,10,9,8,8,7,7,8,8,4,-1,-1,0,1,5,7,8,8,7,7,8,9,9,9,9,9,10,10,9,9,9,11,14,11,11,11,10,9,7,6,6,5,5,5,5,2,-1,-2,-2,0,5,8,9,10,9,8,8,9,8,9,10,10,10,10,10,11,12,13,13,10,11,10,9,8,6,4,3,3,3,2,2,0,0,-1,-2,0,6,9,10,10,11,10,9,9,8,9,11,12,12,12,13,15,17,18,16,8,9,8,7,6,6,3,0,0,1,1,1,0,0,0,0,1,5,7,8,9,12,12,10,9,9,11,13,15,16,18,19,21,23,24,24,7,8,7,6,6,6,3,0,0,0,1,1,1,1,1,2,3,5,6,8,10,14,14,12,10,10,12,16,19,22,24,25,27,28,29,31,7,7,7,7,6,5,4,2,2,2,2,2,2,2,3,4,5,6,8,11,14,18,19,15,12,11,14,20,25,30,31,30,29,29,30,35,7,8,8,9,7,5,5,5,5,3,3,2,2,3,4,5,6,8,10,13,17,22,21,17,13,12,15,23,30,36,38,35,32,28,28,35,7,9,10,11,9,6,5,5,5,3,2,1,2,3,4,5,7,8,10,14,18,22,21,16,12,11,15,24,32,39,42,40,35,28,26,31,8,10,11,12,10,7,5,5,4,3,2,1,0,1,3,5,7,7,10,14,17,20,19,14,11,11,15,24,32,40,44,44,39,31,25,27,8,9,10,11,11,9,7,6,4,3,2,1,0,-1,0,4,6,7,8,11,14,16,15,12,11,12,15,22,29,37,43,47,45,37,30,28,8,9,9,9,10,11,9,7,5,4,3,1,0,-2,0,4,6,7,7,8,9,12,12,12,12,13,16,21,27,36,44,51,52,46,37,31,7,8,8,8,9,11,10,8,7,6,4,2,1,0,1,5,7,7,7,7,8,9,11,13,15,18,21,25,31,41,49,57,59,54,45,36,7,7,7,8,9,10,10,9,8,7,5,3,3,3,5,7,8,7,7,7,8,9,11,15,19,23,27,32,39,48,56,62,63,58,50,40,6,6,7,9,11,11,11,10,9,8,6,4,4,6,7,8,8,8,8,8,8,9,11,16,22,28,34,40,46,53,58,60,59,55,48,40,5,6,8,11,12,12,12,11,10,9,7,5,5,6,7,8,9,9,9,9,9,9,12,17,23,32,40,47,52,56,56,54,50,46,42,37,5,6,8,11,12,12,12,11,10,8,7,5,5,5,6,7,10,12,13,13,12,11,12,16,24,34,43,49,53,55,54,48,43,38,34,32],
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
