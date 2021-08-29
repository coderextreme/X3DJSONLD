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
        texture=ImageTexture(url=['../../images/5/singapore18-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3694340860038916,104.02072702387058,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[32,36,36,19,2,-15,-31,-21,-7,-2,0,0,0,0,2,3,3,3,3,4,4,4,3,3,2,3,4,4,3,3,3,3,5,6,5,3,27,26,23,10,-4,-29,-51,-40,-21,-11,-1,0,0,0,2,3,3,3,3,4,4,4,4,3,1,1,1,2,2,2,3,4,6,8,6,4,20,16,10,0,-12,-40,-65,-56,-39,-24,-7,-2,0,0,2,2,3,3,3,4,4,4,5,3,0,0,0,0,1,2,3,4,7,8,7,4,14,9,3,-6,-18,-41,-63,-63,-58,-41,-22,-11,-2,0,1,2,3,3,3,4,5,6,6,4,2,1,1,2,2,3,3,3,5,6,5,3,8,4,0,-11,-22,-38,-53,-61,-68,-53,-35,-18,-4,0,1,2,3,4,3,5,7,7,7,5,3,3,4,4,4,4,3,2,4,4,3,3,5,1,-2,-13,-24,-35,-45,-52,-58,-47,-32,-17,-3,0,0,2,3,4,4,6,8,8,6,5,3,3,4,4,4,4,2,2,3,4,3,3,3,0,-4,-13,-22,-30,-37,-38,-37,-29,-20,-10,-1,0,0,0,2,4,5,7,8,7,6,4,3,2,2,3,4,5,2,2,3,5,5,5,2,0,-3,-8,-13,-17,-22,-21,-19,-14,-9,-4,0,0,0,0,1,2,4,6,7,6,6,4,3,2,2,2,4,4,2,2,3,5,5,5,2,0,-1,-1,-2,-3,-5,-5,-5,-3,0,0,1,1,0,0,0,0,2,4,5,5,5,5,3,1,1,2,3,4,3,2,3,4,4,5,2,0,0,1,2,2,1,1,0,0,1,2,3,2,0,0,-1,0,1,2,3,3,5,4,2,0,0,1,3,4,3,2,2,3,5,5,3,2,2,2,3,3,2,1,1,1,0,2,4,3,1,0,-1,0,1,2,1,1,3,2,1,0,0,1,3,4,3,2,3,4,5,6,3,3,3,3,3,3,3,2,1,1,0,2,4,3,2,0,-1,0,3,2,0,0,2,2,1,1,1,2,4,5,4,4,4,4,5,5,4,3,3,3,4,3,3,3,2,1,0,1,2,3,4,2,0,1,5,4,1,1,2,3,3,3,4,5,5,5,6,6,5,4,3,3,4,4,3,3,3,3,3,3,3,2,2,2,3,4,5,4,2,3,5,4,1,1,2,3,3,4,5,6,5,5,7,7,6,4,2,1,5,4,4,3,3,3,4,3,3,3,4,4,4,6,7,6,4,4,4,2,2,2,1,2,3,3,4,4,4,5,6,7,4,2,1,0,4,4,4,4,3,3,3,3,3,3,4,4,4,5,7,7,6,4,2,1,1,1,0,1,2,2,2,2,3,4,6,6,3,1,0,0,4,4,5,4,4,3,3,3,4,4,2,2,1,4,6,6,7,5,2,1,0,0,0,0,1,1,1,2,2,3,5,5,3,1,2,3,4,4,4,4,4,4,3,4,5,5,3,3,3,4,5,6,7,6,2,1,0,0,0,0,1,1,0,1,1,2,5,5,3,2,3,4,4,4,4,4,4,5,5,6,7,7,8,8,9,8,6,6,6,5,3,2,1,1,1,1,3,2,0,0,0,1,4,4,4,4,5,6,3,3,3,3,4,4,5,6,6,8,10,11,11,8,5,5,6,5,5,3,1,1,2,3,4,3,0,-1,0,0,3,4,5,5,6,7,3,3,3,3,3,4,4,4,4,7,10,10,9,6,4,4,6,7,7,4,1,0,1,2,4,4,2,0,0,0,2,3,4,5,6,7,3,3,3,3,3,4,5,4,3,6,9,8,7,5,3,4,7,8,8,5,1,0,0,1,4,4,3,1,0,0,1,3,5,6,6,7,3,3,3,3,3,5,7,5,4,5,7,7,6,6,4,5,6,6,7,5,2,0,0,0,1,2,1,1,1,2,3,4,5,7,7,7],
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
