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
        texture=ImageTexture(url=['../../images/4/world12-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,-0.04166130228196607,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[883,1233,707,443,-90,-123,-694,-2343,-2660,-1788,-116,129,250,483,-90,-10,-2,419,1540,1024,1356,289,167,193,239,741,47,0,413,199,-2493,-1550,-43,548,516,140,-60,-97,865,530,491,1104,657,166,66,140,181,409,277,43,493,1423,743,-865,7,278,199,-52,-35,157,703,1370,980,450,356,929,79,102,278,521,1051,108,952,1669,605,627,1046,59,-2,-68,51,617,755,599,503,116,131,282,18,141,267,1128,931,362,1962,1613,231,102,29,6,-4,-111,-4,594,127,151,84,124,155,550,38,131,408,784,843,334,542,1886,408,134,106,119,0,-24,1351,106,97,682,84,76,76,180,1,163,380,655,759,184,327,1598,2434,615,1552,476,220,94,288,427,148,104,80,99,92,249,67,131,238,234,223,510,925,1214,2855,2428,2186,251,1913,885,1458,575,187,168,88,87,91,98,163,117,169,166,236,349,267,558,1032,608,2410,2564,1954,1931,1250,385,222,276,142,98,79,110,53,109,101,207,240,456,254,422,374,738,1186,897,928,1039,721,1265,237,195,222,93,84,117,83,90,125,92,104,297,313,839,595,635,595,699,629,561,454,747,173,111,184,232,98,104,145,151,154,79,91,141,303,379,234,443,453,444,451,355,552,441,209,145,545,357,243,132,277,185,147,95,246,169,229,238,159,270,523,474,324,1187,404,456,177,349,488,896,506,206,-13,100,179,94,191,191,396,378,379,392,365,321,588,568,580,545,418,323,569,678,557,493,-53,-48,110,88,137,355,487,192,89,142,210,465,546,534,302,237,675,334,257,227,216,269,-43,-45,-40,48,47,159,309,397,207,308,353,714,564,387,353,450,317,187,285,308,182,162,64,45,-40,0,6,14,58,50,502,338,220,292,213,356,410,413,150,159,216,265,302,198,21,3,-20,-31,1,5,27,36,201,190,222,273,98,88,96,148,115,130,139,187,145,119,167,96,-18,-41,-24,-2,52,50,58,173,139,75,103,148,98,49,82,91,112,114,120,141,101,-1,34,-43,-24,-2,8,26,37,27,42,63,26,40,7,60,83,131,92,102,102,99,36,-13,-25,-36,-26,-1,-2,2,8,13,85,17,44,58,45,87,96,66,85,117,110,109,13,-20,-30,-28,-28,-22,-3,-18,-1,10,-1,43,65,84,97,134,145,115,29,232,141,129,170,-28,-29,-54,-42,-39,-34,-30,-30,-2,33,-14,37,36,-43,40,139,196,7,166,130,125,151,-25,-30,-50,-37,-37,-33,-35,-30,6,42,-21,40,6,-22,34,136,187,3,103,88,118],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])))])
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
