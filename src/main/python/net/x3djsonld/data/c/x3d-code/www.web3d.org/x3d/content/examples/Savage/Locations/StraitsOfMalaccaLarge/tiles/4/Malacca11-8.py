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
        texture=ImageTexture(url=['../../images/4/Malacca11-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.369293689925194,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1,0,0,0,1,1,1,1,6,12,9,11,51,40,34,296,300,191,607,496,460,526,1,1,3,1,1,1,2,5,6,8,10,12,25,67,55,117,371,862,833,396,380,446,4,2,0,1,2,1,4,7,8,10,14,7,13,94,56,96,160,619,1322,952,188,135,0,2,2,0,1,7,6,4,23,23,12,23,51,44,50,55,67,332,1407,912,376,211,1,2,2,1,0,3,8,16,19,27,22,32,103,73,70,42,93,533,817,587,190,241,2,3,3,3,4,20,24,18,19,22,27,27,75,63,61,95,354,468,847,838,325,118,1,1,2,0,4,25,22,16,24,23,22,60,72,79,85,221,516,457,695,667,174,356,1,1,1,4,19,22,22,15,8,23,51,52,206,57,629,609,1146,812,786,323,133,104,0,6,3,3,4,7,11,25,14,13,40,43,37,84,234,1079,1086,1283,799,242,141,233,3,6,5,7,6,8,3,26,36,21,44,31,39,138,1121,1481,1139,652,361,179,198,173,6,7,7,6,6,8,8,18,25,42,62,67,101,544,1622,933,770,674,653,356,157,138,7,5,5,4,7,9,17,22,36,106,35,67,74,684,1126,1148,1362,823,184,266,134,122,6,8,8,10,11,9,11,21,126,123,54,107,380,507,1371,769,872,1071,400,142,125,109,6,8,2,7,7,15,23,32,57,53,92,386,462,825,952,344,724,356,190,122,148,131,8,4,7,5,7,6,19,32,38,61,100,390,802,863,1201,592,223,165,147,159,127,112,3,2,4,9,4,18,26,25,33,104,580,298,898,868,1110,708,254,257,161,146,229,158,15,9,4,4,7,17,20,36,41,118,927,733,763,958,1164,726,238,355,190,162,157,186,10,12,8,6,15,32,38,47,72,143,484,1308,1115,937,545,619,211,298,138,145,115,128,13,17,17,9,16,33,37,57,78,305,383,1559,1437,972,719,362,152,250,112,105,118,130,15,16,7,14,14,25,41,47,629,194,810,1168,1328,549,763,520,142,211,137,118,135,118,22,23,14,22,23,31,421,78,835,343,1058,1588,1493,889,391,169,228,230,207,137,219,126,19,21,16,23,26,31,516,77,865,345,1084,1652,1539,876,451,169,226,240,205,139,245,123],
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
