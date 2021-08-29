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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='SummerPrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SummerPrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer00',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.724324,diffuseColor=(0.982993,0.969388,0.888136),shininess=0.0)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.254054,diffuseColor=(0.766102,0.577127,0.534973),shininess=0.027027)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer02',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.395932,0.226244,0.128242),shininess=0.027027,specularColor=(0.192616,0.110064,0.062388))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.217687,0.114286,0.070508),shininess=0.135135,specularColor=(0.254054,0.117984,0.120752))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.217687,0.114286,0.070508),shininess=0.994595,specularColor=(1.0,0.464407,0.4753))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.212766,diffuseColor=(0.080807,0.112562,0.137792),shininess=0.048649,specularColor=(0.127228,0.177225,0.216949))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer06',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243243,diffuseColor=(0.022751,0.016578,0.047458),shininess=0.135135,specularColor=(0.271499,0.302282,0.351351))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer07',
      ProtoBody=ProtoBody(
        children=[
        Material(diffuseColor=(0.001283,0.008067,0.029318),shininess=0.027027,specularColor=(0.135714,0.151102,0.17563))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.273809,diffuseColor=(0.288842,0.402349,0.492533),shininess=0.962162,specularColor=(0.288842,0.402349,0.492533))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25946,diffuseColor=(0.406702,0.651555,0.738397),shininess=0.081081,specularColor=(0.065086,0.081081,0.081081))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25946,diffuseColor=(0.406702,0.651555,0.738397),shininess=0.848649,specularColor=(1.0,0.131592,0.218563))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.054008,0.232911,0.389916),emissiveColor=(0.005405,0.005405,0.005405),shininess=0.994595,specularColor=(0.096341,0.079482,0.379258))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.054008,0.232911,0.389916),emissiveColor=(0.005405,0.005405,0.005405),shininess=0.064865,specularColor=(0.051089,0.220322,0.368839))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.35102,0.255782,0.732203),shininess=0.091892,specularColor=(0.080113,0.345487,0.578378))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256757,diffuseColor=(0.191761,0.139733,0.4),shininess=0.021622,specularColor=(0.038185,0.164671,0.275676))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256757,diffuseColor=(0.191761,0.139733,0.4),shininess=0.924324,specularColor=(0.089846,0.387462,0.648649))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.19171,diffuseColor=(0.371245,0.753268,0.641749),shininess=0.403061,specularColor=(0.095636,0.280612,0.16999))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.702703,diffuseColor=(0.0,0.619048,0.20158),shininess=0.010811,specularColor=(0.071441,0.20962,0.126984))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer18',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.285714,diffuseColor=(0.0,0.538739,0.175429),shininess=1.0,specularColor=(0.280892,0.824187,0.499277))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer19',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.285714,diffuseColor=(0.178971,0.538739,0.296122),shininess=0.064865,specularColor=(0.086242,0.259606,0.142694))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer20',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248648,diffuseColor=(0.0,0.619048,0.359036),shininess=0.827027,specularColor=(0.259785,0.762254,0.461759))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer21',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.259459,diffuseColor=(1.0,0.969526,0.308475),shininess=0.891892,specularColor=(0.728905,0.691826,0.153194))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer22',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.259459,diffuseColor=(1.0,0.957367,0.032468),shininess=0.363636,specularColor=(0.990909,0.940502,0.208259))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer23',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.255682,diffuseColor=(0.792195,0.580431,0.008399),shininess=0.177273,specularColor=(0.25,0.237283,0.052542))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248649,diffuseColor=(1.0,0.578166,0.610756),shininess=0.513514)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.994595,0.349312,0.522584),shininess=1.0,specularColor=(0.718919,0.23964,0.370426))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer26',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248062,diffuseColor=(0.697297,0.244898,0.366377),shininess=0.05946,specularColor=(0.335135,0.030678,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer27',
      #  computed conversion ambientIntensity=1.745282, normalized to 1.0 
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=1.0,diffuseColor=(0.536861,0.0529,0.245479),shininess=0.832432,specularColor=(0.805292,0.765198,0.747416))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer28',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.246753,diffuseColor=(0.416216,0.070785,0.14109),shininess=0.010811,specularColor=(0.372973,0.002537,0.001264))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.246753,diffuseColor=(0.336937,0.0,0.111461),shininess=0.064865,specularColor=(0.341055,0.20592,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.264151,diffuseColor=(0.465784,0.255864,0.357227),shininess=0.054054,specularColor=(0.178011,0.093326,0.161906))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.264151,diffuseColor=(0.465784,0.255864,0.357227),shininess=0.751351,specularColor=(0.805405,0.805405,0.805405))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.266839,diffuseColor=(0.228214,0.008975,0.008937),shininess=0.113514,specularColor=(0.237838,0.0,0.101038))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.266838,diffuseColor=(0.303858,0.0,0.132874),shininess=0.048649,specularColor=(0.340541,0.0,0.144668))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Summer34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243243,diffuseColor=(0.12381,0.002642,0.119322),shininess=0.064865,specularColor=(0.151866,0.022352,0.156482))])),
    Anchor(description='click for examples',parameter=["target=_blank"],url=["SummerExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerExamples.x3d","SummerExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SummerExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["SummerExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","SummerExamples.x3d"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SummerPrototypes.py")
