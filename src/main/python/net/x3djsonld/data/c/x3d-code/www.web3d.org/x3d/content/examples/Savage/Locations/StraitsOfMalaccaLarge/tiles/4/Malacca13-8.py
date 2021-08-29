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
        texture=ImageTexture(url=['../../images/4/Malacca13-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.384043785620684,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[920,1383,796,185,160,188,146,199,598,389,318,776,1133,998,1305,869,1070,669,838,820,1319,1335,722,1021,818,180,460,251,191,350,196,271,293,613,787,669,1124,1175,1041,1494,1553,622,629,686,1489,809,770,886,277,120,175,297,279,284,462,317,426,804,1200,1048,1068,1457,838,662,296,130,1331,636,407,638,198,159,165,208,414,251,263,681,1029,1182,1004,800,940,1303,1028,607,172,82,754,458,331,420,670,140,184,586,650,473,560,265,382,466,693,1038,1158,1384,830,619,107,67,77,497,314,236,315,387,534,611,337,260,297,365,769,869,543,963,895,990,1043,327,79,71,238,521,716,312,171,799,434,870,427,361,313,415,741,852,841,648,664,694,785,279,67,82,56,114,361,419,244,564,564,779,401,300,310,440,450,721,568,785,233,700,340,118,96,105,193,124,354,373,323,311,560,567,795,402,318,651,377,626,648,719,615,107,123,294,70,79,121,437,970,486,298,300,312,678,646,833,340,413,757,600,911,488,601,238,630,80,59,70,121,143,783,590,285,240,208,596,1164,999,836,304,396,351,581,604,552,148,631,569,43,47,260,251,500,770,428,293,230,586,1030,468,491,777,1154,1289,627,498,431,122,387,266,40,33,591,344,484,1044,594,591,138,445,719,291,348,624,1201,1415,691,203,422,134,140,50,28,22,539,400,643,399,573,569,307,229,464,530,219,1348,1145,331,338,405,180,160,185,56,26,26,355,619,316,440,535,620,347,309,429,674,147,452,962,195,234,87,176,119,305,51,36,45,346,236,182,335,806,531,358,122,227,150,214,412,1049,418,78,131,87,135,327,173,35,24,108,177,225,391,413,639,237,335,121,917,377,783,195,61,82,287,81,160,380,205,25,20,262,157,332,255,687,753,177,129,107,475,809,635,83,84,513,432,54,120,347,40,19,15,285,272,195,376,520,762,548,81,67,214,352,68,44,57,886,507,58,28,386,18,24,7,257,336,241,216,495,686,374,65,47,153,222,157,50,46,197,243,30,26,22,5,3,7,220,143,237,85,415,241,466,125,38,112,453,161,41,36,392,130,47,21,18,9,12,11,212,177,301,84,417,262,460,129,40,125,532,220,39,38,295,87,40,20,17,11,11,7],
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
