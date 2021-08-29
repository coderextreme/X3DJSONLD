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
        texture=ImageTexture(url=['../../images/5/singapore10-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2995803869799398,103.64728813651608,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[8,8,9,9,9,9,10,11,13,15,14,12,10,8,7,7,8,10,10,9,9,8,8,9,9,8,9,10,12,15,18,21,20,17,14,15,8,9,9,9,9,9,9,9,11,12,11,9,7,6,6,6,7,8,9,10,10,10,9,8,8,8,9,12,14,15,16,18,19,16,14,16,8,9,10,10,10,10,10,8,9,9,8,7,6,5,6,7,7,7,8,10,11,11,10,8,8,9,11,14,15,14,13,15,16,15,15,17,9,9,11,12,12,12,12,11,10,9,8,7,6,6,6,8,8,6,7,10,10,10,9,7,7,9,11,14,15,13,12,13,14,14,15,15,9,9,11,13,14,15,15,14,12,9,8,8,7,6,7,8,8,6,6,9,9,8,7,6,6,8,11,12,13,12,11,11,11,13,14,13,11,10,10,12,15,18,18,18,15,12,10,8,6,5,6,7,7,6,6,7,8,8,8,8,8,10,11,11,11,11,11,10,11,12,13,12,14,11,9,10,16,21,22,21,19,16,12,7,4,4,4,6,6,7,7,6,6,8,9,11,12,11,11,11,10,9,10,11,12,12,11,11,15,13,11,11,13,17,18,19,19,20,17,12,9,6,6,6,7,7,7,6,6,8,10,12,12,11,11,12,11,10,10,11,11,11,11,11,16,16,14,11,10,10,11,14,18,23,22,19,15,10,7,7,7,8,8,6,6,8,9,11,12,11,11,13,13,12,11,10,10,11,12,12,14,13,12,10,7,5,7,10,15,20,21,19,15,10,8,8,8,8,8,7,7,8,9,10,11,11,11,12,13,12,12,11,11,12,12,12,11,9,9,8,5,3,3,5,9,15,16,16,13,8,7,8,8,8,8,8,8,8,9,9,10,11,12,11,11,12,12,13,13,13,12,11,11,9,8,6,4,2,3,4,7,10,12,12,10,7,6,7,7,7,8,8,9,8,8,8,9,11,12,10,10,11,12,13,14,13,12,11,12,11,8,6,4,3,3,5,6,7,8,8,7,5,5,5,6,7,7,9,9,7,7,8,9,11,11,10,10,10,11,12,13,13,12,11,13,12,8,5,4,4,5,6,6,5,5,6,5,4,4,5,5,5,6,8,8,7,7,8,9,10,11,9,9,9,10,11,12,12,12,12,13,12,8,4,4,6,7,7,5,4,4,4,4,4,4,5,4,3,4,6,7,7,7,9,9,10,10,9,8,8,9,9,10,11,11,12,11,10,7,4,5,7,8,8,6,4,4,5,5,4,4,3,3,3,3,4,5,7,8,9,10,9,9,8,8,8,8,8,8,10,11,12,6,6,5,5,6,8,8,8,7,6,6,7,6,6,4,2,1,2,2,3,5,7,8,9,9,8,7,6,7,7,8,8,8,9,10,11,4,5,5,6,7,8,8,9,8,7,8,9,8,6,4,0,0,1,2,3,5,7,8,9,9,8,7,7,7,8,8,8,8,9,10,11,4,6,6,6,7,7,7,8,8,7,8,10,8,6,2,-1,-1,1,2,3,5,7,9,9,9,8,9,9,9,9,9,10,10,10,10,10,5,6,7,7,7,7,7,8,8,8,8,9,8,5,2,-1,0,1,2,4,5,7,8,8,9,9,10,10,10,10,10,11,11,11,11,10,5,6,6,6,6,8,8,8,8,9,9,8,7,5,3,2,1,1,2,4,5,6,6,8,9,9,10,11,11,11,11,12,13,12,11,11,6,5,5,5,6,7,8,8,8,9,8,7,6,5,5,4,3,2,2,4,5,5,5,7,8,9,10,11,12,12,12,13,13,12,11,11,5,5,5,5,6,7,8,8,8,9,7,6,5,6,6,5,4,3,4,6,6,5,5,6,7,8,9,10,11,11,12,12,13,12,11,11],
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
