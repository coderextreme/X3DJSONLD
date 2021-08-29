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
        texture=ImageTexture(url=['../../images/4/Malacca12-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772939,94.8330000960161,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[-99,-99,-99,-99,0,-1,0,0,0,0,0,1,1,2,1,0,1,1,1,3,2,3,-99,-99,-99,-99,-1,1,0,0,0,0,0,1,1,1,0,0,1,2,2,2,1,2,-99,-99,-99,-99,0,0,1,0,0,1,1,1,0,-1,0,2,2,2,1,1,2,8,-99,-99,-99,-99,0,0,1,0,0,0,0,0,1,1,1,1,3,1,0,0,7,5,-99,-99,-99,-99,0,0,0,0,0,0,0,0,0,0,-1,0,0,1,1,26,29,24,-99,-99,-99,-99,0,0,-1,-1,0,0,0,0,0,1,5,2,2,13,5,57,57,72,-99,-99,-99,-99,0,0,0,0,0,0,0,0,-2,-1,3,7,13,17,46,96,179,134,-99,-99,-99,-99,0,-2,0,0,1,0,0,1,1,3,3,8,57,17,186,475,230,434,-99,-99,-99,-99,0,-1,0,0,0,0,2,6,1,0,99,26,29,204,57,273,571,647,-99,-99,-99,-99,0,0,0,0,0,0,1,2,1,0,5,19,114,98,67,155,83,134,-99,-99,-99,-99,0,0,0,0,0,1,1,0,17,5,45,187,197,229,162,76,162,221,-99,-99,-99,-99,0,0,0,0,5,2,2,44,12,9,14,112,380,1107,690,339,487,502,-99,-99,-99,-99,2,2,2,0,0,2,3,3,158,193,48,193,323,1118,1168,1013,778,601,-99,-99,-99,-99,0,1,1,0,-1,2,3,2,573,553,174,441,523,928,1023,874,773,893,0,0,1,0,0,-1,-4,-1,-2,20,7,5,233,605,705,713,1376,1543,1465,1126,1753,1536,0,0,0,3,1,-2,3,-3,5,-3,23,251,201,360,784,844,1740,1369,1327,1514,856,756,-2,0,0,0,0,0,2,5,4,4,75,14,200,202,587,438,1131,1444,1002,671,1388,1055,0,2,0,0,-2,-1,-3,1,1,-13,781,437,394,610,414,581,1121,788,537,1060,672,447,1,0,2,0,3,5,-5,0,5,12,982,542,718,1075,1818,1325,528,298,372,673,347,215,1,1,1,0,1,-2,-4,-6,-11,113,872,1447,656,1047,575,176,100,169,533,493,299,197,3,2,2,-1,2,-1,-3,-1,56,518,448,849,220,170,66,84,114,202,183,315,207,152,2,4,0,0,2,1,-3,-6,13,483,409,865,265,188,69,80,161,218,209,278,187,128],
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
