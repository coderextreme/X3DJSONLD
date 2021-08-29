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
    meta(content='SheenPrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SheenPrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen00',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.641609,0.0,0.979592))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.453153,diffuseColor=(0.0,0.125353,0.262167),shininess=0.157143,specularColor=(0.383952,0.0,0.607143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen02',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.0,0.004294,0.314286),shininess=0.636364,specularColor=(0.364672,0.833805,0.909091))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.12078,0.144113,0.314286),shininess=0.157143,specularColor=(0.233325,0.278401,0.607143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.001831,0.0,0.285714),shininess=0.157143,specularColor=(0.15182,0.607143,0.173867))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.293167,diffuseColor=(0.0,0.262167,0.262167),shininess=0.157143,specularColor=(0.383952,0.0,0.607143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen06',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.293166,diffuseColor=(0.0,0.26801,0.265089),shininess=0.157143,specularColor=(0.607143,0.132784,0.175795))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen07',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.0,0.282514,0.314286),shininess=0.157143,specularColor=(0.233325,0.278401,0.607143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248982,diffuseColor=(0.0,0.286882,0.261868),shininess=0.066326,specularColor=(0.243549,0.556863,0.607143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248982,diffuseColor=(0.0,0.286882,0.261868),shininess=0.15,specularColor=(0.243549,0.556863,0.607143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.255102,diffuseColor=(0.024884,0.185628,0.002586),shininess=0.127551,specularColor=(0.505305,0.463899,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.255102,diffuseColor=(0.024884,0.423143,0.002586),shininess=0.127551,specularColor=(0.505305,0.463899,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.314286,0.314286,0.0),shininess=0.345455,specularColor=(0.367996,0.439089,0.957576))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.238213,diffuseColor=(0.287218,0.299852,0.00588),shininess=0.157143,specularColor=(0.15182,0.607143,0.173867))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.255102,diffuseColor=(0.5,0.476914,0.187954),shininess=0.081633,specularColor=(0.035776,0.591837,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.255102,diffuseColor=(0.490091,0.5,0.217241),shininess=0.107143,specularColor=(0.565306,0.591837,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.253165,diffuseColor=(0.403061,0.395404,0.0),shininess=0.157143,specularColor=(0.683673,0.099015,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.218111,0.0),shininess=0.157143,specularColor=(0.607143,0.53913,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen18',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.139969,0.0),shininess=0.157143,specularColor=(0.607143,0.53913,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen19',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.246753,diffuseColor=(0.336937,0.0,0.111461),shininess=0.064865,specularColor=(0.336183,0.372973,0.001264))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen20',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.247863,diffuseColor=(0.42712,0.195852,0.009311),shininess=0.157143,specularColor=(0.233325,0.607143,0.572339))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen21',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.314286,0.144113,0.006851),shininess=0.157143,specularColor=(0.233325,0.278401,0.607143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen22',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.314286,0.011163,0.006851),shininess=0.8,specularColor=(0.381971,0.455764,0.993939))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen23',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.293166,diffuseColor=(0.26801,0.0,0.0),shininess=0.157143,specularColor=(0.607143,0.132784,0.175795))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.938776,0.055032,0.055032))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.030303,specularColor=(0.981818,0.0,0.0))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen26',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.0,diffuseColor=(0.262167,0.0,0.0),shininess=0.157143,specularColor=(0.383952,0.0,0.607143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen27',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.268711,diffuseColor=(0.265081,0.0,0.265819),shininess=0.157143,specularColor=(0.607143,0.607143,0.004963))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen28',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.231704,diffuseColor=(0.308275,0.0,0.300584),shininess=0.369697,specularColor=(0.236417,0.945455,0.270749))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.273068,0.144113,0.314286),shininess=0.157143,specularColor=(0.233325,0.278401,0.607143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.293167,diffuseColor=(0.262167,0.0,0.262167),shininess=0.157143,specularColor=(0.383952,0.0,0.607143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.410434,diffuseColor=(0.348557,0.0,0.795918),shininess=0.433673,specularColor=(0.448482,0.0,0.709184))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.2788,diffuseColor=(0.187413,0.121184,0.25936),shininess=0.122449,specularColor=(0.0,0.625,0.892857))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243244,diffuseColor=(0.119925,0.060701,0.183051),shininess=0.086735,specularColor=(0.356263,0.383104,0.826531))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243243,diffuseColor=(0.135374,0.138095,0.183051),shininess=0.07027,specularColor=(0.362217,0.369498,0.489785))])),
    Anchor(description='click for examples',parameter=["target=_blank"],url=["SheenExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenExamples.x3d","SheenExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["SantafeExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","SantafeExamples.x3d"],
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

print ("python x3d.py load successful for SheenPrototypes.py")
