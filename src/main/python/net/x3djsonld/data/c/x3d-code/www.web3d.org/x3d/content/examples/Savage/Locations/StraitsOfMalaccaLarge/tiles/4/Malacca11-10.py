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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca11-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.369293689925194,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[48,118,38,99,47,73,30,31,31,23,10,4,6,4,4,4,5,5,4,6,5,6,145,38,22,30,48,12,32,23,33,36,9,5,5,6,4,5,5,5,5,6,6,5,42,41,15,35,27,31,31,27,34,36,10,3,5,5,5,6,7,5,7,5,5,5,67,84,29,21,36,34,35,27,34,12,8,6,5,5,5,5,5,7,5,5,5,5,180,123,56,29,30,17,24,18,17,22,12,9,6,5,5,5,4,4,7,5,6,5,50,279,85,35,21,11,12,20,20,16,13,5,5,5,5,4,4,5,4,5,5,6,177,78,60,29,29,21,11,27,10,7,6,4,4,5,4,4,6,5,5,5,5,4,100,92,62,54,24,32,20,33,7,9,5,4,5,5,4,5,4,7,5,5,7,6,71,49,58,75,48,39,17,10,10,4,4,5,6,4,5,5,5,4,4,5,6,6,65,298,629,189,103,51,21,8,4,4,4,5,5,4,5,5,6,4,4,5,5,4,83,617,704,124,258,140,28,9,11,7,4,4,3,4,5,5,3,4,5,5,4,6,176,416,280,92,119,55,41,23,27,92,5,5,5,5,5,5,5,5,5,6,5,5,511,250,222,224,14,21,30,50,53,31,5,6,4,4,7,5,5,5,5,6,4,5,312,214,108,43,39,37,54,33,33,34,5,5,6,7,5,6,6,5,5,4,4,5,1181,546,79,120,35,27,77,54,23,24,8,6,5,5,6,6,6,6,4,4,4,4,426,209,146,66,65,50,191,55,30,11,6,6,5,7,6,5,6,5,5,5,5,4,339,448,150,148,380,47,20,67,48,19,5,6,7,6,7,7,5,5,6,6,5,6,379,284,191,62,83,29,23,18,11,23,6,4,5,5,6,6,6,6,5,6,6,6,483,208,156,55,96,184,45,34,23,19,11,5,6,5,7,8,7,7,7,6,5,6,822,629,119,89,121,173,16,21,13,24,8,45,6,6,7,7,6,7,6,7,6,6,760,741,109,121,145,142,70,18,23,18,14,102,5,6,6,6,6,6,7,7,7,6,751,653,109,106,133,138,54,16,28,18,11,106,5,6,6,7,7,6,7,7,7,5],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
