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
        texture=ImageTexture(url=['../../images/4/Malacca5-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-2.674956597161275,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1618,1623,1365,1227,1469,944,714,436,292,177,172,336,294,530,164,130,138,93,67,60,40,40,1480,1524,1203,950,1054,889,583,418,373,528,634,212,257,233,186,102,82,72,64,44,48,42,1357,1279,1070,1069,625,636,429,241,582,627,284,425,230,278,118,106,85,70,72,61,54,46,1377,1154,862,714,786,650,744,340,613,317,397,298,182,146,101,89,91,69,72,71,66,57,2175,1552,983,771,717,646,532,196,169,296,319,382,269,114,86,76,95,54,71,66,56,43,1774,1158,775,655,703,575,243,225,353,307,287,349,318,108,98,76,82,62,67,77,85,67,944,760,548,424,547,677,374,271,328,315,201,328,90,111,68,52,62,52,57,80,90,76,726,563,429,380,437,217,171,469,249,359,176,222,116,97,90,64,47,53,82,78,92,72,610,489,413,324,225,246,225,228,125,122,112,98,107,84,67,42,42,53,68,71,74,82,454,417,371,274,312,268,186,183,136,143,111,97,83,70,68,57,55,42,47,75,73,73,534,378,301,247,292,144,175,134,120,136,93,73,71,61,55,52,38,49,38,58,54,45,354,380,388,217,187,153,109,145,108,113,101,62,68,50,52,41,37,46,41,53,46,50,690,276,142,237,227,134,113,108,136,84,87,67,68,51,52,52,52,54,55,39,55,44,597,247,277,314,133,157,87,84,90,78,87,68,52,63,58,58,42,34,53,69,37,43,384,283,161,180,138,137,90,133,110,84,76,71,57,48,62,43,50,84,67,56,53,56,603,391,299,245,112,119,101,102,107,87,65,58,53,50,61,67,267,139,90,67,55,54,472,292,366,253,179,196,101,84,99,71,75,55,68,92,83,190,121,88,67,73,58,67,344,331,184,200,124,206,92,100,70,59,68,55,84,92,70,65,80,82,75,54,42,38,685,431,164,228,267,188,118,86,76,72,48,72,62,61,65,91,58,84,84,70,67,62,534,305,150,177,200,71,89,124,72,62,78,63,67,74,67,78,46,71,61,115,74,73,231,170,155,112,78,78,70,57,97,77,77,65,45,44,53,46,48,58,50,48,30,23,270,192,178,95,89,78,72,58,97,80,79,68,45,43,51,44,46,50,43,45,30,23],
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
