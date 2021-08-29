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
        texture=ImageTexture(url=['../../images/5/singapore6-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.264653537467964,104.0350900579996,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[20,11,3,2,4,7,9,6,2,5,8,10,12,10,8,7,7,8,9,10,10,11,13,8,-1,-6,-6,-4,0,3,8,10,10,8,6,4,13,8,3,2,4,7,8,5,2,4,7,8,8,8,7,8,9,9,9,8,7,8,10,4,-6,-10,-8,-5,-3,0,2,4,5,5,3,2,8,6,4,3,4,6,7,5,1,3,6,6,5,6,6,9,11,11,9,7,6,6,8,3,-6,-10,-8,-5,-4,-2,-1,0,3,3,1,0,8,7,5,6,6,6,6,3,1,3,5,4,2,4,7,10,14,14,12,10,9,9,10,6,0,-3,-3,-3,-2,-1,0,1,5,4,-1,-6,8,8,7,7,7,6,5,3,2,3,4,3,1,4,7,11,15,15,13,12,12,11,10,7,4,1,0,-1,-1,0,1,4,7,5,-3,-10,10,10,9,9,9,5,3,3,5,5,6,5,3,5,9,10,10,11,12,13,13,10,5,3,1,0,0,0,0,1,4,7,9,6,-3,-11,12,11,10,10,9,5,1,4,9,9,8,5,3,5,8,7,4,6,10,12,12,8,1,0,-1,-1,-1,0,1,4,7,10,11,6,-2,-11,8,9,9,7,5,4,5,11,16,13,7,3,0,0,3,3,2,3,6,7,8,6,1,0,-2,-2,-1,0,4,7,9,10,11,7,-1,-9,4,7,8,4,1,3,8,16,23,17,8,1,-4,-3,0,0,0,0,0,2,4,5,3,0,-2,-3,-1,1,6,9,10,10,11,7,0,-7,0,3,6,3,1,3,8,14,20,15,9,3,0,0,0,0,0,-1,-2,0,3,5,4,3,0,0,0,2,6,8,9,10,11,8,1,-5,0,1,4,3,2,3,5,11,16,14,9,6,4,2,0,0,-2,-3,-5,-2,2,5,7,6,3,1,1,3,5,7,9,10,11,8,1,-4,4,5,5,3,1,1,1,6,11,11,9,8,6,4,3,1,0,-2,-4,-1,2,7,12,11,7,5,3,5,7,9,10,10,11,9,3,-3,9,8,7,3,0,0,-1,2,7,9,9,8,6,5,5,3,0,-1,-2,0,2,9,17,17,11,7,5,6,9,11,11,11,12,10,4,-2,6,5,4,1,0,0,0,4,10,12,13,8,3,4,7,4,0,-1,0,1,3,8,13,13,11,8,5,5,7,9,11,12,11,10,9,2,2,1,0,-1,-1,0,1,7,14,16,16,8,0,1,8,3,-2,-1,1,3,6,7,8,10,10,9,5,4,5,8,11,12,10,9,13,8,3,1,0,0,0,1,5,10,14,15,14,10,6,6,7,2,-5,-3,2,5,7,9,10,11,11,9,3,1,2,4,8,8,3,1,1,-2,4,3,1,1,0,4,8,12,14,13,11,12,14,11,7,0,-9,-5,2,6,9,11,13,13,12,8,2,0,0,0,3,3,-2,-9,-12,-18,10,6,2,1,3,6,10,14,16,14,11,11,12,11,9,2,-7,-5,1,5,7,9,11,12,12,8,1,0,-1,0,1,-1,-13,-24,-31,-37,15,9,3,3,5,8,12,16,18,15,12,10,8,10,12,5,-5,-5,0,3,5,7,9,10,11,8,1,0,-1,0,0,-7,-24,-40,-50,-57,11,6,2,4,7,9,11,14,16,16,14,10,7,10,13,7,-1,-2,0,2,5,6,8,9,10,7,3,2,2,1,0,-9,-25,-40,-51,-59,3,1,0,5,10,10,9,11,14,15,15,11,7,9,13,10,3,1,0,2,4,5,6,7,7,7,6,6,8,6,0,-10,-23,-35,-47,-56,2,0,-1,2,8,9,10,11,12,13,13,10,6,6,7,6,3,2,2,3,4,5,5,6,6,6,7,8,9,7,3,-6,-21,-35,-46,-53,2,-1,-4,0,3,8,11,11,9,10,10,9,7,3,0,0,2,4,5,5,4,4,4,4,5,6,8,8,8,8,9,1,-20,-38,-45,-50],
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
