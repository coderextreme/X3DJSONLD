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
        texture=ImageTexture(url=['../../images/4/Malacca0-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-7.7118318364,105.95125062410463,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[2,1,2,0,1,1,0,0,0,0,0,0,1,1,1,1,0,0,0,0,1,0,1,1,3,2,2,2,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,3,1,3,1,1,2,1,0,0,1,0,1,0,0,1,1,1,0,0,0,0,0,0,3,2,2,1,1,1,1,2,1,3,2,1,0,1,0,2,0,1,0,0,0,0,1,2,2,1,1,2,3,4,4,2,3,3,1,1,0,1,3,1,1,1,1,0,3,2,3,3,3,1,3,2,1,2,4,4,2,2,1,2,3,3,3,1,0,0,0,0,1,1,2,0,1,1,4,3,2,-1,24,54,23,30,17,60,48,22,26,0,0,0,1,0,-1,0,0,4,3,1,39,29,94,18,136,174,120,67,49,103,158,1,0,0,0,0,0,2,4,3,26,58,117,160,172,205,265,292,170,281,313,316,144,1,1,0,-2,0,0,0,3,3,-1,97,195,286,229,314,329,358,279,296,526,347,295,0,1,0,0,0,0,1,2,2,3,92,6,380,381,430,597,630,633,376,382,315,353,0,2,2,0,0,2,1,3,2,1,2,305,474,675,713,689,780,560,420,452,588,580,2,2,2,2,2,1,2,2,2,1,3,3,422,686,658,608,488,541,579,526,673,688,3,2,3,2,0,1,2,1,3,3,2,1,0,352,473,634,745,520,561,661,909,985,4,4,3,2,2,1,0,3,3,2,-19,-5,-3,31,35,109,181,279,301,561,570,584,4,2,3,2,4,2,5,91,140,212,2,17,116,330,329,205,284,325,384,399,474,486,3,3,3,4,4,1,33,93,301,406,381,436,445,647,438,585,586,348,685,575,641,663,4,3,4,1,88,198,286,113,485,686,584,880,911,1023,556,552,454,388,534,716,855,941,17,13,13,153,256,349,321,544,470,767,614,1193,1306,1089,699,660,497,463,604,881,1315,1437,16,17,144,293,345,469,593,795,896,872,1075,1264,1540,854,871,1276,798,556,618,879,1644,2083,48,103,208,298,357,476,583,843,649,937,1637,1558,1119,1141,940,975,1683,797,445,685,1012,1076,40,91,203,294,362,530,621,776,653,901,1603,1599,1166,1093,890,939,1753,865,442,674,1003,1047],
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
