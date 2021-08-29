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
    meta(content='SilkyPrototypes.x3d',name='title'),
    meta(content="Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyPrototypes.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SilkyPrototypes.x3d'),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky00',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.684572,0.683198,0.686136),shininess=0.071429,specularColor=(0.034754,0.033555,0.693878))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky01',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.684572,0.683198,0.686136),shininess=0.071429,specularColor=(0.425195,0.033555,0.693878))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky02',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.684572,0.683198,0.686136),shininess=0.071429,specularColor=(0.693878,0.033555,0.313623))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky03',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.684572,0.683198,0.686136),shininess=0.071429,specularColor=(0.693878,0.033555,0.033555))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky04',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.684572,0.683198,0.686136),shininess=0.071429,specularColor=(0.693878,0.29313,0.033555))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky05',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.684572,0.683198,0.686136),shininess=0.071429,specularColor=(0.535714,0.500555,0.025907))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky06',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.684572,0.683198,0.686136),shininess=0.071429,specularColor=(0.182327,0.540816,0.026154))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky07',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.684572,0.683198,0.686136),shininess=0.071429,specularColor=(0.026154,0.540816,0.439658))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky08',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.25,diffuseColor=(0.684572,0.683198,0.686136),shininess=0.071429,specularColor=(0.026154,0.242667,0.540816))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky09',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.670745,0.641609,0.979592))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky10',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.964441,0.641609,0.979592))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky11',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.979592,0.641609,0.798946))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky12',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.979592,0.641609,0.641609))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky13',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.979592,0.805939,0.641609))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky14',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.946959,0.979592,0.641609))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky15',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.641609,0.979592,0.657925))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky16',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.641609,0.976208,0.979592))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky17',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.256,diffuseColor=(0.029158,0.026292,0.026964),shininess=0.061224,specularColor=(0.641609,0.748831,0.979592))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky18',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243243,diffuseColor=(0.135374,0.138095,0.183051),shininess=0.07027,specularColor=(0.362217,0.369498,0.489785))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky19',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248982,diffuseColor=(0.280113,0.086454,0.284904),shininess=0.020408,specularColor=(0.588517,0.248038,0.596939))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky20',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248982,diffuseColor=(0.284904,0.086454,0.1891),shininess=0.040816,specularColor=(0.765306,0.33779,0.572187))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky21',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248982,diffuseColor=(0.284904,0.0,0.0),shininess=0.040816,specularColor=(0.831633,0.403851,0.367065))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky22',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248982,diffuseColor=(0.286882,0.120897,0.0),shininess=0.040816,specularColor=(0.831633,0.482277,0.317353))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky23',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248982,diffuseColor=(0.286882,0.274,0.0),shininess=0.040816,specularColor=(0.631735,0.600752,0.241071))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky24',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248982,diffuseColor=(0.0,0.286882,0.060344),shininess=0.02551,specularColor=(0.428943,0.632653,0.241422))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky25',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248982,diffuseColor=(0.0,0.286882,0.261868),shininess=0.066326,specularColor=(0.243549,0.556863,0.607143))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky26',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.243243,diffuseColor=(0.007271,0.138095,0.183051),shininess=0.07027,specularColor=(0.362217,0.369498,0.489785))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky27',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.211415,0.257055,0.330514),shininess=0.02551,specularColor=(0.183673,0.165545,0.163419))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky28',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.336312,0.24807,0.277146),shininess=0.035714,specularColor=(0.221121,0.199297,0.196736))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky29',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.330514,0.258233,0.211415),shininess=0.02551,specularColor=(0.183673,0.165545,0.163419))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky30',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.336312,0.24807,0.201129),shininess=0.061224,specularColor=(0.108805,0.098067,0.096807))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky31',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245762,diffuseColor=(0.267191,0.210849,0.092776),shininess=0.02551,specularColor=(0.183673,0.165545,0.163419))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky32',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.589217,0.581431,0.492013),shininess=0.061224)])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky33',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.248983,diffuseColor=(0.280771,0.277061,0.234452),shininess=0.061224,specularColor=(0.22814,0.205624,0.202982))])),
    ProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Silky34',
      ProtoBody=ProtoBody(
        children=[
        Material(ambientIntensity=0.245763,diffuseColor=(0.288982,0.330084,0.172823),shininess=0.061224,specularColor=(0.108805,0.098067,0.096807))])),
    Anchor(description='click for examples',parameter=["target=_blank"],url=["SilkyExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyExamples.x3d","SilkyExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SilkyExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0))),
        geometry=Text(string=["SilkyExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","SilkyExamples.x3d"],
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

print ("python x3d.py load successful for SilkyPrototypes.py")
