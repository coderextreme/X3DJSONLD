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
        texture=ImageTexture(url=['../../images/5/singapore6-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.264653537467964,103.93454881909646,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[3,3,2,2,3,3,4,4,6,8,8,8,9,9,8,8,7,8,9,12,10,6,4,4,5,5,7,9,10,7,6,11,17,25,31,32,5,4,4,4,5,6,4,3,5,7,8,7,5,4,6,8,8,7,7,9,8,5,3,4,4,4,5,7,9,9,10,13,17,31,43,50,5,5,5,5,6,6,4,2,4,7,6,5,3,2,4,7,7,5,5,6,6,4,3,4,4,3,3,5,8,11,12,13,17,31,44,53,3,4,5,5,4,4,3,3,4,6,5,4,3,3,5,6,5,5,5,5,5,4,5,6,7,6,5,6,7,10,12,13,15,20,25,31,2,4,4,4,3,2,3,4,5,6,5,4,4,5,5,5,5,5,4,4,4,4,6,9,10,8,7,7,7,9,10,11,11,9,9,12,5,5,5,4,4,3,4,5,5,6,6,6,6,5,4,3,3,4,5,5,5,4,6,9,11,8,6,7,7,8,8,7,7,6,5,8,9,8,6,5,5,6,6,7,6,6,7,8,7,4,3,3,3,4,5,7,7,6,6,9,11,7,6,8,8,6,4,3,3,4,4,7,9,9,7,5,5,5,6,6,6,5,5,5,5,4,3,3,3,3,5,8,10,10,10,9,9,7,7,9,9,5,2,3,3,5,7,9,10,11,8,6,5,5,4,4,5,5,4,3,3,4,4,3,2,2,4,9,12,13,12,9,8,7,8,10,9,4,1,2,4,7,10,10,12,12,11,9,9,7,4,2,4,6,7,5,6,7,6,4,3,3,4,6,8,9,8,6,5,4,5,8,10,7,5,6,7,9,10,12,13,12,12,12,12,10,5,0,3,8,9,7,8,9,8,5,4,4,4,5,5,4,4,4,3,2,2,6,10,9,10,9,9,9,10,11,12,12,12,12,13,12,5,0,1,6,8,7,7,8,7,5,5,6,7,8,7,6,5,5,5,3,2,4,6,8,9,8,7,8,9,8,10,11,11,12,14,14,6,-1,0,3,5,6,6,7,6,5,6,8,10,11,11,9,7,7,6,4,3,3,4,6,8,5,5,7,8,5,5,6,10,13,14,13,6,0,0,4,4,4,4,5,6,6,7,8,9,10,9,7,6,6,7,8,8,4,2,5,7,5,5,7,8,6,0,2,9,14,14,12,7,2,3,4,4,2,2,4,6,8,8,7,7,8,7,6,5,5,7,13,14,6,0,3,6,5,6,7,8,8,-1,0,3,6,8,9,6,4,5,7,7,6,5,4,5,8,7,5,5,7,7,5,6,9,13,19,19,8,0,4,6,6,6,6,6,6,-2,0,-1,0,2,5,5,5,7,10,11,12,9,5,5,8,7,4,4,7,7,6,7,13,20,25,24,10,1,5,7,7,6,4,3,3,1,0,0,-1,2,8,6,5,5,6,9,11,9,6,6,8,7,6,6,8,8,7,9,15,19,21,19,10,4,4,3,4,5,4,3,3,6,2,0,0,5,11,9,4,2,2,4,8,8,6,6,7,8,9,10,9,8,8,10,15,17,16,13,10,6,1,0,2,4,5,5,4,4,0,0,2,8,12,10,6,4,2,4,7,8,7,5,4,6,9,10,9,10,12,15,17,18,17,15,12,8,0,-3,-1,1,2,4,4,1,0,2,7,11,13,12,9,6,4,5,7,8,7,4,2,3,8,10,10,12,18,20,19,19,19,18,16,11,0,-6,-4,-2,0,1,3,2,0,4,8,10,11,10,8,7,5,4,4,5,6,4,0,1,4,8,12,17,24,26,19,16,18,19,15,10,1,-4,-2,-1,0,0,3,4,1,5,8,7,7,7,7,6,5,2,0,2,6,4,0,0,1,5,14,23,32,31,19,13,16,17,13,8,2,0,0,0,0,0,3],
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
