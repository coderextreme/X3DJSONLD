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
        texture=ImageTexture(url=['../../images/4/Malacca12-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772939,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[123,139,139,113,106,126,204,183,352,96,83,233,224,671,526,191,331,457,648,429,828,751,133,124,371,134,192,194,234,277,205,242,72,552,420,268,627,150,288,230,546,864,263,251,187,115,280,177,228,194,301,278,240,222,108,195,235,151,258,150,303,219,325,300,206,214,176,135,147,299,195,213,393,274,219,544,263,308,89,172,145,135,161,500,409,293,495,364,215,158,147,193,193,216,264,591,650,202,162,128,117,116,119,147,157,532,480,471,395,238,260,583,165,169,194,257,490,1489,665,349,177,155,135,179,123,165,272,279,742,1211,820,621,625,275,154,248,366,372,1089,1722,332,477,400,190,195,246,175,231,396,257,306,929,1222,1175,688,853,199,182,208,655,631,1281,609,582,592,458,674,200,385,228,856,398,480,949,499,517,555,382,191,248,513,789,365,181,197,602,770,959,218,586,277,302,1246,354,330,1356,911,818,243,349,229,291,1206,492,269,197,180,407,399,337,152,175,950,1328,792,324,297,570,1147,1291,381,180,354,281,969,901,203,217,287,154,452,229,115,249,673,786,289,298,194,471,1271,1205,164,120,149,715,335,158,155,140,136,140,136,102,190,151,195,681,297,166,688,541,1024,1091,184,112,115,217,181,166,120,128,131,96,194,97,262,352,152,572,452,161,240,413,782,554,650,122,110,145,174,286,122,162,104,142,108,98,156,223,144,222,141,157,215,241,760,844,668,132,151,101,148,124,116,153,141,87,105,101,233,209,377,145,180,237,146,140,291,194,164,375,168,100,113,91,111,182,115,355,118,215,340,225,149,148,321,349,290,152,414,452,163,685,100,153,166,84,168,161,75,49,185,208,286,518,303,154,202,170,169,186,35,57,289,189,243,81,66,121,411,151,97,524,407,454,336,428,324,161,166,188,163,242,35,29,648,547,636,232,72,119,130,109,49,176,259,432,447,367,472,158,436,347,577,64,80,314,1383,742,128,123,237,168,181,243,137,132,309,388,456,592,576,337,329,458,50,104,31,46,1279,421,44,187,122,166,85,85,49,85,519,456,413,592,862,361,227,583,84,27,22,31,1335,480,54,191,125,167,78,103,59,87,525,462,451,619,887,320,232,655,78,30,23,35],
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
